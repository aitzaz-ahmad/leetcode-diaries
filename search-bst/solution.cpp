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

 TreeNode* searchBST(TreeNode* root, int val) {

        if(val < 1 || val > 10000000)
            throw std::out_of_range("val must be within the range [1, 10000000]");

        if(root == NULL || root->val == val)
            return root;

        return (val < root->val) ? searchBST(root->left, val) : searchBST(root->right, val);
    }
