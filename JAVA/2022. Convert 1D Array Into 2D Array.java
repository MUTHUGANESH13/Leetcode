class Solution {
    public int[][] construct2DArray(int[] o, int m, int n) {
        if(m*n!=o.length){
        int[][] a=new int[0][0];
        return a;
        }
        int i,j,k=0;
        int[][] a=new int[m][n];
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                a[i][j]=o[k++];
            }
        }
        return a;
    }
}