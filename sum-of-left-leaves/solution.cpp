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
    return node != NULL &&
           node->left == NULL &&
           node->right == NULL;
}

int sumOfLeftLeaves(TreeNode* root) {

    if(root == NULL)
        throw std::invalid_argument("root must not be NULL");

    if(isLeaf(root))
        return 0;

    auto lnSum = 0;
    auto nodes = std::queue<TreeNode*>{};
    nodes.push(root);

    while(!nodes.empty()) {
        auto node = nodes.front();
        nodes.pop();

        if(isLeaf(node))
            continue;

        if(node->left != NULL) {
            nodes.push(node->left);

            if(isLeaf(node->left))
                lnSum += node->left->val;
        }

        if(node->right != NULL)
            nodes.push(node->right);
    }

    return lnSum;
}
