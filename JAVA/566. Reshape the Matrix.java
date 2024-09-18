class Solution {
    public int[][] matrixReshape(int[][] m, int r, int c) {
        if(m.length*m[0].length!=r*c)
        return m;
        int i,j,x=0,y=0;
        int[][] a=new int[r][c];
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                a[i][j]=m[x][y++];
                if(y>=m[0].length){
                    y=0;
                    x++;
                }
            }
        }
        return a;
    }
}