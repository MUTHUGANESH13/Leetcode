class Solution {
    public int minOperations(int[] n, int k) {
        Arrays.sort(n);
        for(int i=0;i<n.length;i++){
            if(n[i]>=k)
            return i;
        }
        return n.length;
    }
}