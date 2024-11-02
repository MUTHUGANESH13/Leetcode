class Solution {
    public int minMoves(int[] n) {
        int i,m=n[0],s=0;
        for(i=1;i<n.length;i++){
            if(m>n[i])
            m=n[i];
        }
        for(int c:n)
        s+=(c-m);
        return s;
    }
}