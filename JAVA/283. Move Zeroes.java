class Solution {
    public void moveZeroes(int[] n) {
        int l = 0;
        for (int i = 0; i < n.length; i++) {
            if (n[i] != 0) {
                n[l++] = n[i];
            }
        }
        while (l < n.length) {
            n[l++] = 0;
        }
    }
}