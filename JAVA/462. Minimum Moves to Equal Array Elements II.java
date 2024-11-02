class Solution {
    public int minMoves2(int[] n) {
        Arrays.sort(n);
        int s=0,m=n[n.length/2];
        for(int i:n)
        s+=Math.abs(i-m);
        return s;
    }
}