class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& n, vector<vector<int>>& q) {
        vector<int>a;
        for(int i=0;i<n.size()-1;i++){
            if(n[i]%2!=n[i+1]%2)
            a.push_back(0);
            else
            a.push_back(1);
        }
        vector<int>prefix(a.size()+1,0);
        for(int i=0;i<a.size();i++)prefix[i+1]=prefix[i]+a[i];
        vector<bool>v;
        for(int i=0;i<q.size();i++){
            if(prefix[q[i][1]]-prefix[q[i][0]]>0)
            v.push_back(false);
            else
            v.push_back(true);
        }
        return v;
    }
};
