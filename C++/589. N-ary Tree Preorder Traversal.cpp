class Solution {
    vector<int>n={};
    void p(Node* root){
        if(root==NULL)
        return;
        n.push_back(root->val);
        for(Node* c:root->children){
            p(c);
        }
    }
public:
    vector<int> preorder(Node* root) {
        if(root==NULL)
        return n;
        p(root);
        return n;
    }
};