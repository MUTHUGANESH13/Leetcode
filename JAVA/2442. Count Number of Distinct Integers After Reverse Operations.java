class Solution {
    public int countDistinctIntegers(int[] n) {
        int i,x,r,l=n.length,k=1,q,y;
        int[] a=new int[l*2];
        for(i=0;i<l;i++)
        {
            a[i]=n[i];
        }
        q=l;
        for(i=0;i<l;i++)
        {
            r=0;
            x=n[i];
            while(x!=0)
            {
                y=x%10;
                r=(r*10)+y;
                x/=10;
            }
            a[q++]=r;
        }
        Arrays.sort(a);
        for(i=0;i<a.length-1;i++)
        {
            if(a[i]!=a[i+1])
            k++;
        }
        return k;
    }
}