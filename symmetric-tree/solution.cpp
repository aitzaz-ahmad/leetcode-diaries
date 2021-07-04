 bool areSymmetric(TreeNode* root1, TreeNode* root2) {

      if(root1 == NULL && root2 == NULL)
          return true;

      if(root1 == NULL || root2 == NULL)
          return false;

      return root1->val == root2->val &&
             areSymmetric(root1->left, root2->right) &&
             areSymmetric(root1->right, root2->left);
  }

  bool isSymmetric(TreeNode* root) {
      
      if(root == NULL)
          throw std::invalid_argument("root cannot be NULL");

      return areSymmetric(root->left, root->right);
  }
