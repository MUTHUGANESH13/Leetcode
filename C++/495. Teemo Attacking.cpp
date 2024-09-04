class Solution {
public:
    int findPoisonedDuration(vector<int>& t, int d) {
       if(t.empty()||d<=0)
       return 0;
       int i,k=d;
       for(i=1;i<t.size();i++)
       {
        if(t[i]<t[i-1]+d)
        {
            k=k+t[i]-t[i-1];
        }
        else
        k=k+d;
       }
       return k;
    }
};