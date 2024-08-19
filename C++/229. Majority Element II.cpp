class Solution {
public:
    vector<int> majorityElement(vector<int>& n) {
        unordered_map<int,int>x;
        vector<int>k;
        for(int i=0;i<n.size();i++)
        {
            x[n[i]]++;
        }
        for( const auto& a:x)
        {
            if(a.second>n.size()/3)
            k.push_back(a.first);
        }
        return k;
    }
};