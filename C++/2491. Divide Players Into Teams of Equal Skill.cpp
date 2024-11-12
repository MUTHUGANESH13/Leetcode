class Solution {
public:
    long long dividePlayers(vector<int>& s) {
        long long a,d=0;
        sort(s.begin(),s.end());
        a=accumulate(s.begin(),s.end(),0);
        if(a%(s.size()/2)!=0)
        return -1;
        a=a/(s.size()/2);
        int i=0,j=s.size()-1;
        while(i<=j){
            if(s[i]+s[j]==a)
            d+=s[i++]*s[j--];
            else
            return -1;
        }
        return d;
    }
};