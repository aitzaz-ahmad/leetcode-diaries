/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

 constexpr bool isLeaf(TreeNode* node) {

    return node != NULL && node->left == NULL && node->right == NULL;
}

void traverse(TreeNode* node, std::queue<TreeNode*>& nodes) {

    if(node == NULL)
        return;

    nodes.push(node);

    if(node->left)
        traverse(node->left, nodes);

    if(node->right)
        traverse(node->right, nodes);
}

void flatten(TreeNode* root) {

    if(root == NULL || isLeaf(root))
        return;

    auto nodes = std::queue<TreeNode*>{};
    traverse(root->left, nodes);
    traverse(root->right, nodes);

    auto current = root;
    while(!nodes.empty()) {

        current->left = NULL;
        current->right = nodes.front();
        current = current->right;

        nodes.pop();
    }
}
