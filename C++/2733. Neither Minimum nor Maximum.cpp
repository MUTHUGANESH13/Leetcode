class Solution {
public:
    int findNonMinOrMax(vector<int>& n) {
        if(n.size()<3)
        return -1;
        sort(n.begin(),n.end());
        return n[1];
    }
};