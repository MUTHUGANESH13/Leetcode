class Solution {
public:
    vector<int>n={};
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL)
        return n;
        n.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
        return n;
    }
};