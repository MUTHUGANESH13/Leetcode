class Solution {
public:
    int chalkReplacer(vector<int>& c, int k) {
        long long i,s=0;
        s=accumulate(c.begin(),c.end(),s);
        k=k%s;
        for(i=0;i<c.size();i++){
            if(k<0)
            return(i-1);
            k-=c[i];
        }
        return i-1;
    }
};