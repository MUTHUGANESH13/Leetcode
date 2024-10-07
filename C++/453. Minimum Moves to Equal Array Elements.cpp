class Solution {
public:
    int minMoves(vector<int>& n) {
        int m,s=0;
        m=*min_element(n.begin(),n.end());
        for(int i:n)
        s+=(i-m);
        return s;
    }
};