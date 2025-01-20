class Solution {
    private int gcd(int a, int b)
    {
        if (a == 0)
            return b;
        return gcd(b % a, a);
    }
    public int minOperations(int[] n, int[] g) {
        Arrays.sort(n);
        int r=g[0];
        for(int i=1;i<g.length;i++){
            r=gcd(r,g[i]);
        }
        for(int i=0;i<n.length;i++){
            if(r%n[i]==0)
            return i;
        }
        return -1;
    }
}