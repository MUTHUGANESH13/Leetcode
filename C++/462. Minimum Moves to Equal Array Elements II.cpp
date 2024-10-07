class Solution {
public:
    int minMoves2(vector<int>& n) {
        sort(n.begin(),n.end());
        int s=0,m=n[n.size()/2];
        for(int i:n)
        s+=abs(i-m);
        return s;
    }
};