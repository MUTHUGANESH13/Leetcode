class Solution {
    public double minimumAverage(int[] n) {
        Arrays.sort(n);
        double m=9999.9;
        for(int i=0;i<n.length/2;i++){
            m=Math.min(m,(n[i]+n[n.length-1-i])/2.0);
        }
        return m;
    }
}