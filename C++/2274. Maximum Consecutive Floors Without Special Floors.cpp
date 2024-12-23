class Solution {
public:
    int maxConsecutive(int b, int t, vector<int>& s) {
        sort(s.begin(),s.end());
        int m=0,d=0;
        m=max(s[0]-b,m);
        for(int i=0;i<s.size()-1;i++){
            d=s[i+1]-s[i]-1;
            m=max(d,m);
        }
        return max(m,t-s.back());
    }
};