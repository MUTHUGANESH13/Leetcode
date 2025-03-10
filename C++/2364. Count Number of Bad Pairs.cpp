class Solution {
public:
    long long countBadPairs(vector<int>& n) {
        long long c=n.size()*(n.size()-1)/2;
        map<int,int>m;
        for(int i=0;i<n.size();i++){
            m[n[i]-i]++;
        }
        for(auto i=m.begin();i!=m.end();i++){
            if(i->second>1)
            c-=((long long)(i->second-1)*i->second/2);
        }
        return c;
    }
};