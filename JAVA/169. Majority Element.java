class Solution {
    public int majorityElement(int[] n) {
        Arrays.sort(n);
        return(n[n.length/2]);
    }
}