class Solution {
    public int diagonalSum(int[][] m) {
        int i,s=0;
        for(i=0;i<m.length;i++)
        {
            s+=m[i][i];
            s+=m[i][m.length-1-i];
        }
        if(m.length%2!=0)
        s-=m[m.length/2][m.length/2];
        return s;
    }
}