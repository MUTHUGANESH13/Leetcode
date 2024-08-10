class Solution {
public:
    void rotate(vector<int>& n, int k) {
        k=k%n.size();
        reverse(n.begin(),n.end());
        reverse(n.begin(),n.begin()+k);
        reverse(n.begin()+k,n.end());
    }
};