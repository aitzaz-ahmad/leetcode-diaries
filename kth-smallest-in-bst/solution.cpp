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

class Solution {
private:
  vector<int> m_elements = {};

  constexpr bool isLeaf(TreeNode* root) {

      return root != NULL &&
          root->left == NULL &&
          root->right == NULL;
  }

  void fillElements(TreeNode* root) {

      if(root->left != NULL)
          fillElements(root->left);

      m_elements.emplace_back(root->val);

      if(root->right != NULL)
          fillElements(root->right);
  }

public:
    int kthSmallest(TreeNode* root, int k) {

        if(isLeaf(root))
            return root->val;

        fillElements(root);

        return m_elements[k-1];
    }
};
