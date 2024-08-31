class Solution {
public:
    bool canBeEqual(vector<int>& t, vector<int>& a) {
        sort(t.begin(),t.end());
        sort(a.begin(),a.end());
        return(t==a);
    }
};