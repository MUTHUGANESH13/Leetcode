class Solution {
    public int maximumBeauty(int[] n, int k) {
        Arrays.sort(n);
        int l=0,m=0;
        for(int i=0;i<n.length;i++){
            while(l<n.length&& n[i]-n[l]>2*k)l++;
            m=Math.max(m,i-l+1);
        }
        return m;
    }
}