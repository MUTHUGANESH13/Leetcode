class Solution {
    public void rotate(int[][] m) {
        int i,j,t,g;
        for(i=0;i<m.length;i++)
        {
            for(j=i;j<m.length;j++)
            {
                t=m[i][j];
                m[i][j]=m[j][i];
                m[j][i]=t;
            }
        }
        for(i=0;i<m.length;i++)
        {
            g=m.length-1;
            for(j=0;j<m.length/2;j++)
            {
                t=m[i][j];
                m[i][j]=m[i][g];
                m[i][g]=t;
                g--;
            }
        }
    }
}