class Solution {
    public int reverse(int k) {
        long  r = 0,x = k;
        while (x != 0) {
            r = (r * 10) + (x % 10);
            x /= 10;
        }
        if (r > 2147483647 || r < -2147483648) {
            return 0;
        } else {
            return((int)r);
        }
    }
}