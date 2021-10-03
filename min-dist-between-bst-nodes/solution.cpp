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

 void fillInOrder(TreeNode* node, vector<int>& buffer) {

    if(node->left)
        fillInOrder(node->left, buffer);

    buffer.emplace_back(node->val);

    if(node->right)
        fillInOrder(node->right, buffer);
}

vector<int> to_array(TreeNode *root) {

    if(root == NULL)
        return {};

    auto nodes = vector<int> {};
    fillInOrder(root, nodes);

    return nodes; //always sorted in ascending order
}

int minDiffInBST(TreeNode* root) {

    if(root == NULL)
        throw std::invalid_argument("root must not be NULL");

    if(root->left == NULL && root->right == NULL)
        throw std::invalid_argument("root must have at least 1 child");


    auto nodes = to_array(root);

    auto minDiff = INT_MAX;
    auto first = nodes.crbegin();
    auto second = std::next(nodes.crbegin());

    while (second != nodes.crend())
        minDiff = std::min(minDiff, *(first++) - *(second++));

    return minDiff;
}
