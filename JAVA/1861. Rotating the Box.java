class Solution {
    public char[][] rotateTheBox(char[][] b) {
        char[][] v=new char[b[0].length][b.length];
        int m=b.length,n=b[0].length;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
            v[i][j]=b[j][i];
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m / 2; j++) {
                char t = v[i][j];
                v[i][j] =v[i][m - 1 - j];
                v[i][m - 1 - j] = t;
            }
        }
        for (int j = 0; j < m; j++) {
            int l = n - 1;
            for (int i = n - 1; i >= 0; i--) {
                if (v[i][j] == '#') {
                    v[i][j] = '.';
                    v[l][j] = '#';
                    l--;
                }
                if (v[i][j] == '*') {
                    l = i - 1;
                }
            }
        }
        return v;
    }
}