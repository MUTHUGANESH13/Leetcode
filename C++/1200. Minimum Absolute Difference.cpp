class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& a) {
        int i,m=INT_MAX;
        vector<vector<int>>d;
        sort(a.begin(),a.end());
        for(i=0;i<a.size()-1;i++){
            if(abs(a[i]-a[i+1])<m)
            m=abs(a[i]-a[i+1]);
        }
        for(i=0;i<a.size()-1;i++){
            if(abs(a[i]-a[i+1])==m)
            d.push_back({a[i],a[i+1]});
        }
        return d;
    }
};