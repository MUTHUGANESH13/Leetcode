class Solution {
    public int countServers(int[][] g) {
        int a=0;
        int[] r=new int[g.length];
        int[] c=new int[g[0].length];
        for(int i=0;i<g.length;i++){
            for(int j=0;j<g[0].length;j++){
                if(g[i][j]==1){
                    r[i]++;
                    c[j]++;
                }
            }
        }
        for(int i=0;i<g.length;i++){
            for(int j=0;j<g[0].length;j++){
                if(g[i][j]==1 && (r[i]>1 || c[j]>1))
                a++;
            }
        }
        return a;
    }
}