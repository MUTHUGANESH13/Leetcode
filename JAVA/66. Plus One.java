class Solution {
    public int[] plusOne(int[] d) {
        d[d.length-1]++;
        for(int i=d.length-1;i>=0;i--)
        {
            if(d[i]==10 && i!=0)
            {
                d[i-1]++;
                d[i]=0;
                continue;
            }
            else
            break;
        }
        if(d[0]==10)
        {
            d[0]=0;
            int[] a=new int[d.length+1];
            for(int i=0;i<d.length;i++)
            {
                a[i+1]=d[0];
            }
            a[0]=1;
            return a;
        }
        return d;
    }
}