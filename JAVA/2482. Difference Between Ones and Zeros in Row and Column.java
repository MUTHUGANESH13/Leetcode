class Solution {
    public int[][] onesMinusZeros(int[][] g) {
        int[][] a=new int[g.length][g[0].length];
        int[] o=new int[g.length];
        int[] zr=new int[g.length];
        int[] oc=new int[g[0].length];
        int[] zc=new int[g[0].length];
        for(int i=0;i<g.length;i++){
            for(int j=0;j<g[0].length;j++){
                if(g[i][j]==1){
                    o[i]++;
                    oc[j]++;
                }
                else{
                    zr[i]++;
                    zc[j]++;
                }
            }
        }
        for(int i=0;i<g.length;i++){
            for(int j=0;j<g[0].length;j++)
            a[i][j]=o[i]+oc[j]-zr[i]-zc[j];
        }
        return a;
    }
}