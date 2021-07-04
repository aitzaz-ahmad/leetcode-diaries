bool isSameTree(TreeNode* p, TreeNode* q) {

      if(p == NULL && q == NULL)
          return true;

      if(p == NULL || q == NULL)
          return false;

      auto treeNodes = std::queue<TreeNode*>{};
      treeNodes.push(p);
      treeNodes.push(q);

      while(!treeNodes.empty()){
          TreeNode* node1 = treeNodes.front();
          treeNodes.pop();

          TreeNode* node2 = treeNodes.front();
          treeNodes.pop();

          if(node1 == NULL && node2 == NULL)
              continue;

          if(node1 == NULL || node2 == NULL)
              return false;

          if(node1->val != node2->val)
              return false;

          treeNodes.push(node1->left);
          treeNodes.push(node2->left);
          treeNodes.push(node1->right);
          treeNodes.push(node2->right);
      }

      return true;
  }
