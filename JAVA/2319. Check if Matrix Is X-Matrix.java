class Solution {
    public boolean checkXMatrix(int[][] g) {
        int i,j;
        for(i=0;i<g.length;i++)
        {
            for(j=0;j<g.length;j++)
            {
                if(i==j || i+j+1==g.length){
                    if(g[i][j]==0)
                    return false;
                }
                else{
                    if(g[i][j]!=0)
                    return false;
                }
            }
        }
        return true;
    }
}