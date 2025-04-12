class Solution {
    public int maxAdjacentDistance(int[] n) {
        int m=Math.abs(n[n.length-1]-n[0]);
        for(int i=0;i<n.length-1;i++){
            m=Math.max(m,Math.abs(n[i]-n[i+1]));
        }
        return m;
    }
}