class Solution {
    public int numSpecial(int[][] m) {
        int[] r=new int[m.length];
        int[] c=new int[m[0].length];
        for(int i=0;i<m.length;i++){
            for(int j=0;j<m[0].length;j++){
                if(m[i][j]==1){
                    r[i]++;
                    c[j]++;
                }
            }
        }
        int k=0;
        for(int i=0;i<m.length;i++){
            for(int j=0;j<m[0].length;j++){
                if(m[i][j]==1 && r[i]==1 && c[j]==1){
                    k++;
                }
            }
        }
        return k;
    }
}