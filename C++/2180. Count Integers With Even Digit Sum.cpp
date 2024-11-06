class Solution {
public:
    int countEven(int n) {
        int i, c = 0, m, k;
        for (i = 2; i <= n; i++) {
            k = i;
            m = 0;
            while (k != 0) {
                m += k % 10;
                k /= 10;
            }
            if (m % 2 == 0)
                c++;
        }
    return c;
}
};