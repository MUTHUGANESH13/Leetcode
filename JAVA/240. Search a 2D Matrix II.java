class Solution {
    public boolean searchMatrix(int[][] m, int t) {
        int i=0,j=m[0].length-1;
        while(i<m.length && j>=0){
            if(t==m[i][j])
            return true;
            else if(t>m[i][j])
            i++;
            else
            j--;
        }
        return false;
    }
}