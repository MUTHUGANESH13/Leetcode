class Solution {
    public int divide(int g, int d) {
        if (g == Integer.MIN_VALUE && d == -1) {
            return Integer.MAX_VALUE;
        }
        if (d == 1) {
            return g;
        }
        if (d == -1) {
            return -g;
        }
        long x = Math.abs((long) g);
        long y = Math.abs((long) d);
        long result = 0;
        while (x >= y) {
            long temp = y, multiple = 1;
            while (x >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            x -= temp;
            result += multiple;
        }
        if ((g > 0 && d < 0) || (g < 0 && d > 0)) {
            result = -result;
        }
        if (result > Integer.MAX_VALUE) {
            return Integer.MAX_VALUE;
        }
        if (result < Integer.MIN_VALUE) {
            return Integer.MIN_VALUE;
        }
        return (int) result;
    }
}
