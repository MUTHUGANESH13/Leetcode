class Solution {
public
    int divide(int g, int d) {
        if(g==INT_MIN && d==-1)
        return(INT_MAX);
        else if(g==INT_MIN && d==1)
        return(INT_MIN);
        else if(g==INT_MAX && d==-1)
        return(INT_MIN+1);
        else if(d==1)
        return(g);
        long int x=abs(g),k=0,y=abs(d);
        while(x=y)
        {
            x-=y;
            k++;
        }
        if((g0 && d0)(g0 && d0))
        return -k;
        return k;
    }
};
