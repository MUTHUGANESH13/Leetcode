class Solution {
    public long gridGame(int[][] g) {
        long m=Long.MAX_VALUE,f=0,s=0;
        for(int i:g[0])
        f+=i;
        for(int i=0;i<g[0].length;i++){
            f-=g[0][i];
            m=Math.min(m,Math.max(f,s));
            s+=g[1][i];
        }
        return m;
    }
}