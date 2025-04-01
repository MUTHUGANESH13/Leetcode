class Solution {
public:
    int minOperations(vector<int>& n, int k) {
        sort(n.begin(),n.end());
        for(int i=0;i<n.size();i++){
            if(n[i]>=k)
            return i;
        }
        return n.size();
    }
};