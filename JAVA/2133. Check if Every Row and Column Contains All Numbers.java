class Solution {
    public boolean checkValid(int[][] m) {
        int i,j;
        for(i=0;i<m.length;i++){
            int [] r=new int[m.length+1];
            int [] c=new int[m.length+1];
            for(j=0;j<m.length;j++){
                if(r[m[i][j]]==1)
                return false;
                r[m[i][j]]=1;
                if(c[m[j][i]]==1)
                return false;
                c[m[j][i]]=1;
            }}
            return true;
        }
    }