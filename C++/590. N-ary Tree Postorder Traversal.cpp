class Solution {
    vector<int>n={};
    void p(Node* root){
        if(root==NULL)
        return ;
        for(auto c:root->children){
            p(c);
            n.push_back(c->val);
        }
    }
public:
    vector<int> postorder(Node* root) {
        if(root==NULL)
        return n;
        p(root);
        n.push_back(root->val);
        return n;     
    }
};