class Solution {
    public int countNegatives(int[][] g) {
        int i,k=0;
        for(i=0;i<g.length;i++){
            for(int j:g[i]){
                if(j<0)
                k++;
            }
        }
        return k;
    }
}