class Solution {
    public int maxProfit(int[] p) {
        int i,m=0,min=p[0];
        if(p.length==0) 
        return 0;       
        for(i=0;i<p.length;i++)
        {
            if(p[i]<min)
            min=p[i];
            else
            m=m>p[i]-min?m:p[i]-min;
        }
        return m;
    }
}