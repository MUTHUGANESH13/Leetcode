class Solution {
    public boolean isPalindrome(int x) {
        if (x < 0) {
            return (false);
        } else {
            int rev = 0, r, t = x;
            while (t != 0) {
                r = t % 10;
                rev = (rev * 10) + r;
                t = t / 10;
            }
            if (rev == x) {
                return (true);
            } else {
                return (false);
            }
        }

    }
}
