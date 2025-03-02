class Solution {
    public boolean canArrange(int[] a, int k) {
        int [] x=new int[k];
        for (int i : a) {
            int r = i % k;
            if (r < 0) {
                r += k;
            }
            x[r]++;
        }        
        if (x[0] % 2 != 0) {
            return false;
        }
        for (int i = 1; i <= k / 2; i++) {
            if (x[i] != x[k - i]) {
                return false;
            }
        }        
        return true;
    }
}