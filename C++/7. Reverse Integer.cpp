class Solution {
public:
    int reverse(int x) {
        int r,s=0,k=0;
        if(x<0)
        {x=-x;
        k=1;}
        if(x>2147483648)
        return 0;
        while(x!=0)
        {
            s=(s*10)+(x%10);
            x/=10;
        }
        if(k==1)
        return(-s);
        else
        return(s);
    }
};