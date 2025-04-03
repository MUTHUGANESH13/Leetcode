class Solution {
    public int longestMonotonicSubarray(int[] n) {
        int m=0,w=1;
        for(int i=0;i<n.length-1;i++){
            if(n[i]<n[i+1]){
                w++;
            }
            else{
                m=Math.max(m,w);
                w=1;
            }
        }
        m=Math.max(m,w);
        w=1;
        for(int i=0;i<n.length-1;i++){
            if(n[i]>n[i+1]){
                w++;
            }
            else{
                m=Math.max(m,w);
                w=1;
            }
        }
        m=Math.max(m,w);
        return m;
    }
}