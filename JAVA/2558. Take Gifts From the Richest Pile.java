class Solution {
    public long pickGifts(int[] g, int k) {
        for(int i=0;i<k;i++){
            Arrays.sort(g);
            g[g.length-1]=(int)Math.floor(Math.sqrt(g[g.length-1]));
        }
        long s=0;
        for(int i=0;i<g.length;i++){
            s+=g[i];
        }
        return s;
    }
}