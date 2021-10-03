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

 int rangeSumBST(TreeNode* root, int low, int high) {

    if(low < 1 || low > 100000)
        throw std::out_of_range("'low' must be within the range [1, 100000]");

    if(high < 1 || high > 100000)
        throw std::out_of_range("'high' must be within the range [1, 100000]");

    if(low >= high)
        throw std::invalid_argument("'low' must less than 'high'.");

    if(root == NULL)
        throw std::invalid_argument("'root' cannot be NULL");

    auto sum = 0;
    auto nodes = std::queue<TreeNode*> {};
    nodes.push(root);

    while(!nodes.empty()) {
        auto node = nodes.front();
        nodes.pop();

        if(node->val >= low && node->val <= high)
            sum += node->val;

        if(node->left)
            nodes.push(node->left);

        if(node->right)
            nodes.push(node->right);
    }

    return sum;
}
