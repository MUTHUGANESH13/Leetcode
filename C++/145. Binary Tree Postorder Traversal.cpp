class Solution {
public:
    vector<int>n={};
    vector<int> postorderTraversal(TreeNode* root) {
        if(root==NULL)
        return n;
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        n.push_back(root->val);
        return n;
    }
};