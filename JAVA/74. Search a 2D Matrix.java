class Solution {
    public boolean searchMatrix(int[][] m, int t) {
        int i,j,l=0,u=m[0].length-1,c;
        for(i=0;i<m.length;i++){
            if(m[i][m[0].length-1]>=t){
                while(l<=u){
                   c=(l+u)/2;
                   if(m[i][c]==t)
                   return true;
                   else if(m[i][c]>t)
                   u=--c;
                   else
                   l=++c;
                }
                return false;
            }
        }
        return false;
    }
}