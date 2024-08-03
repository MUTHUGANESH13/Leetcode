class Solution {
public:
    bool isPalindrome(int x) {
        long int n, s;
        n = x;
        if (n == 0)
            return true;
        else if (n < 0)
            return false;
        else {
            while (n != 0) {
                s = (s * 10) + (n % 10);
                n = n / 10;
            }
        }
        if (s == x)
            return true;
        else
            return false;
    }
};