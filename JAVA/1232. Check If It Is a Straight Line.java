class Solution {
    public boolean checkStraightLine(int[][] c) {
        float x, y;
        x = c[1][0] - c[0][0];
        y = c[1][1] - c[0][1];
        for (int i = 1; i < c.length - 1; i++) {
            if ((c[i + 1][0] - c[i][0]) * y != (c[i + 1][1] - c[i][1]) * x)
                return false;
        }
        return true;
    }
}