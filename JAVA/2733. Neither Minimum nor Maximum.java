class Solution {
    public int findNonMinOrMax(int[] n) {
        if(n.length<3)
        return -1;
        Arrays.sort(n);
        return n[1];
    }
}