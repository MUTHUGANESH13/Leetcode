class Solution {
    public boolean isSameAfterReversals(int n) {
        int x=n,y,s=0;
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
        return(n==s);
    }
}