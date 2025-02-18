class Solution {
    public void vo(int[][] m){
        for(int i=0;i<m.length;i++){
            for(int j=i+1;j<m.length;j++){
                int t=m[i][j];
                m[i][j]=m[j][i];
                m[j][i]=t;
            }
        }
        for(int i=0;i<m.length;i++){
            for(int j=0;j<m.length/2;j++){
                int t=m[i][j];
                m[i][j]=m[i][m.length-1-j];
                m[i][m.length-1-j]=t;
            }
        }
    }
    public boolean findRotation(int[][] m, int[][] t) {
        for(int i=0;i<4;i++){
            if(Arrays.deepEquals(m,t))
            return true;
            vo(m);
        }
        return false;
    }
    
}