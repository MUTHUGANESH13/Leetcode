class Solution {
    public int missingNumber(int[] n) {
        Arrays.sort(n);
        int i,k=-1;
        for(i=0;i<n.length;i++)
        {
            if(i!=n[i])
            {
                k=i;
                break;
            }
        }
        return(k==-1?n.length:k);
    }
}