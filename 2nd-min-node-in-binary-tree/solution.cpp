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

constexpr bool HasNoChildren(TreeNode* root) {
    return root->left == NULL && root->right == NULL;
}

constexpr bool HasChildren(TreeNode* root) {
    return root->left != NULL && root->right != NULL;
}

int findSecondMinimumValue(TreeNode* root) {

    if(root == NULL || HasNoChildren(root))
        return -1;

    auto unvisited = std::queue<TreeNode*> {};
    unvisited.push(root);

    auto smallest = root->val;
    auto secondSmallest = UINT_MAX;

    while(!unvisited.empty())
    {
        TreeNode* node = unvisited.front();

        if(HasChildren(node))
        {
            if(node->left->val == smallest)
                unvisited.push(node->left);

            if(node->right->val == smallest)
                unvisited.push(node->right);

            auto bigger = std::max(node->left->val, node->right->val);
            if(bigger != smallest && bigger < secondSmallest)
                secondSmallest = bigger;
        }

        unvisited.pop();
    }

    return secondSmallest == UINT_MAX ? -1 : secondSmallest;
}
