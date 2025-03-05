class Solution {
public:
    vector<int> successfulPairs(vector<int>& s, vector<int>& p, long long t) {
        vector<int>a;
        sort(p.begin(),p.end());
        for(int i=0;i<s.size();i++){
            int l=0,r=p.size();
            while(l<r){
                int m=l+(r-l)/2;
                if((long long)s[i] * p[m] >= t) r=m;
                else l=m+1;
            }
            a.push_back(p.size()-l);
        }
        return a;
    }
};
