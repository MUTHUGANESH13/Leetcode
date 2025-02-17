class Solution {
    public int maxAscendingSum(int[] n) {
        int s=n[0],m=0;
        for(int i=0;i<n.length-1;i++){
            if(n[i]<n[i+1])
            s+=n[i+1];
            else{
                m=Math.max(m,s);
                s=n[i+1];
            }
        }
        return Math.max(m,s);
    }
}