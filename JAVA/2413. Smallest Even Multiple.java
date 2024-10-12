class Solution {
    public int smallestEvenMultiple(int n) {
        if(gcd(n,2)==1)
        return(2*n);
        return n;
    }
    private int gcd(int a, int b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }
}