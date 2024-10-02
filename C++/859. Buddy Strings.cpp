class Solution {
public:
    bool buddyStrings(string s, string g) {
        if(s.size()!=g.size())
        return false;
        set x(s.begin(),s.end());
        if(s==g)
        return x.size()<s.size();
        int i=0,j=s.size()-1;
        while(i<s.size() && s[i]==g[i])
            i++;
        while(j>=0 && s[j]==g[j])
            j--;

        if(i<j)
            swap(s[i],s[j]);
        return s==g;
    }
};