class Solution {
    public int rangeSum(int[] d, int n, int l, int r) {
        long[] a=new long[((n+1)*n)/2];
        int i,j,k=0;
        long s;
        for(i=0;i<n;i++)
        {
            s=0;
            for(j=i;j<n;j++)
            {
                s+=d[j];
                a[k++]=s;
            }
        }
        Arrays.sort(a);
        s=0;
        for(i=l-1;i<r;i++)
        {
            s=(s+a[i])%1000000007;
        }
        return (int)s;
    }
}