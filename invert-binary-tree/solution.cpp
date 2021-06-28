TreeNode* invertTree(TreeNode* root, int& nodes)
    {
        if(root == NULL)
            return root;

        if(++nodes > 100)
            throw std::invalid_argument("the number of nodes in must not be greater than 100");

        if(root->val < -100 || root->val > 100)
            throw std::out_of_range("node->val must be within the range [-100, 100]");

        std::swap(root->left, root->right);

        if(root->left)
            invertTree(root->left);

        if(root->right)
            invertTree(root->right);

        return root;
    }

    TreeNode* invertTree(TreeNode* root) {

        auto visitedNodes = 0;
        return invertTree(root, visitedNodes);
    }
