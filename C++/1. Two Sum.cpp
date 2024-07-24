class Solution {
    public int[] twoSum(int[] n, int target) {
        int[] a=new int[2];
        int i,j,t;
        for(i=0;i<n.length;i++)
        {
            t=0;
            t=target-n[i];
            for(j=i+1;j<n.length;j++)
            {
                if(t==n[j])
                {a[0]=i;
                a[1]=j;
                }
            }
        }
        return(a);
    }
}
