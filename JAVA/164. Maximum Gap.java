class Solution {
    public int maxConsecutive(int b, int t, int[] s) {
        Arrays.sort(s);
        int m=Math.max(t-s[s.length-1],s[0]-b);
        for(int i=0;i<s.length-1;i++){
            m=Math.max(m,s[i+1]-s[i]-1);
        }
        return m;
    }
}