class Solution {
public:
    vector<int> sortedSquares(vector<int>& n) {
        vector<int>a;
        for(int i=0;i<n.size();i++)
        {
            a.push_back(n[i]*n[i]);
        }
        sort(a.begin(),a.end());
        return a;
    }
};