class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(gcd(n,2)==1)
        return 2*n;
        return n;
    }
};