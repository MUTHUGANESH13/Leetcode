class Solution {
    public boolean satisfiesConditions(int[][] g) {
        if(g.length>1){
        for(int i=0;i<g.length-1;i++){
            for(int j=0;j<g[0].length;j++){
                if(g[i][j]!=g[i+1][j])
                return false;
            }
        }}
        if(g[0].length>1){
        for(int i=0;i<g.length;i++){
            for(int j=0;j<g[0].length-1;j++){   
                if(g[i][j]==g[i][j+1])
                return false;             
            }
        }}
        return true;
    }
}