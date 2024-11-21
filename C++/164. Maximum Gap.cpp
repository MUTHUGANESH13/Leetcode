class Solution {
public:
    int maximumGap(vector<int>& n) {
        sort(n.begin(),n.end());
        int m=0;
        for(int i=0;i<n.size()-1;i++)
        m=max(m,n[i+1]-n[i]);
        return m;
    }
};