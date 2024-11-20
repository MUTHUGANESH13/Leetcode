class Solution {
public:
    int longestConsecutive(vector<int>& n) {
        if(n.empty())
        return 0;
        set<int>s(n.begin(),n.end());
        vector<int>a(s.begin(),s.end());
        sort(a.begin(),a.end());
        int c=1,m=1;
        for(int i=0;i<a.size()-1;i++){
            if(a[i]+1==a[i+1])
            c++;
            else
            c=1;
            m=max(c,m);
        }
        return m;
    }
};