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

 bool hasRTLSum(TreeNode* root, int target) {

        if(root == NULL)
            return false;

        if(root->val < -1000|| root->val > 1000)
            throw std::out_of_range("Node.val must be within the range [-1000, 1000]");

        target -= root->val;

        if(root->left == NULL && root->right == NULL)
            return target == 0;

        return hasRTLSum(root->left, target) || hasRTLSum(root->right, target);
    }

bool hasPathSum(TreeNode* root, int targetSum) {

        if(targetSum < -1000 || targetSum > 1000)
            throw std::out_of_range("targetSum must be within the range [-1000, 1000]");

        return hasRTLSum(root, targetSum);
    }
