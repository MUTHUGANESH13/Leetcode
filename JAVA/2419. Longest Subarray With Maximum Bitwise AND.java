class Solution {
    public int longestSubarray(int[] n) {
        int m=-1,a=0,k=0,i;
        for(i=0;i<n.length;i++){
            if(m<n[i])
            m=n[i];
        }
        for(i=0;i<n.length;i++){
            if(n[i]==m)
            a++;
            else
            a=0;
            if(a>k)
            k=a;
            
        }
        return k;
    }
}