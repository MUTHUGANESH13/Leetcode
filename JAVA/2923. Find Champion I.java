class Solution {
    public int findChampion(int[][] g) {
        for(int i=0;i<g.length;i++){
            boolean t=true;
            for(int j=0;j<g[0].length;j++){
                if(i!=j && g[i][j]!=1)
                t=false;
            }
            if(t)return i;
        }
        return -1;
    }
}