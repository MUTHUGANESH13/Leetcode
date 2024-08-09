class Solution {
public:
    int singleNumber(vector<int>& n) {
        int i,a=0;
        for(i=0;i<n.size();i++)
        {
            a^=n[i];
        }
        return a;
    }
};