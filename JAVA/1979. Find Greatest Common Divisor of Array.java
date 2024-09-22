class Solution {
    public int findGCD(int[] n) {
        Arrays.sort(n);
        return gcd(n[0],n[n.length-1]);
    }
    private int gcd(int a, int b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }
}