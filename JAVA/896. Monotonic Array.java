class Solution {
    public boolean isMonotonic(int[] n) {
        int a=1,b=1,i;
        for(i=0;i<n.length-1;i++)
        {
            if(n[i]<n[i+1])
            a=0;
            if(n[i]>n[i+1])
            b=0;
        }
        return(a==1||b==1);
    }
}