class Solution {
public:
    bool isSameAfterReversals(int n) {
        long int s=0,x=n,y;
        while(x!=0)
        {
            y=x%10;
            s=(s*10)+y;
            x/=10;
        }
        x=s;
        s=0;
        while(x!=0)
        {
            y=x%10;
            s=(s*10)+y;
            x/=10;
        }
        return(s==n);
    }
};