class Solution {
    public void setZeroes(int[][] m) {
        int cs = m.length;
        int rs = m[0].length;
        boolean[] r = new boolean[cs];
        boolean[] c = new boolean[rs];
        
        for (int i = 0; i < cs; i++) {
            for (int j = 0; j < rs; j++) {
                if (m[i][j] == 0) {
                    r[i] = true;
                    c[j] = true;
                }
            }
        }
        
        for (int i = 0; i < cs; i++) {
            for (int j = 0; j < rs; j++) {
                if (r[i] || c[j]) {
                    m[i][j] = 0;
                }
            }
        }
    }
}
