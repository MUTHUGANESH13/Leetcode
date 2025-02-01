class Solution {
    public int findKthLargest(int[] n, int k) {
        Arrays.sort(n);
        k--;
        k%=n.length;
        return n[n.length-1-k];
    }
}