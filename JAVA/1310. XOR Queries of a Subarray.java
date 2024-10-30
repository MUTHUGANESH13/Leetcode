class Solution {
    public int[] xorQueries(int[] a, int[][] q) {
        int n = a.length;
        int[] prefixXor = new int[n + 1];
        for (int i = 0; i < n; i++) {
            prefixXor[i + 1] = prefixXor[i] ^ a[i];
        }
        int[] result = new int[q.length];
        for (int i = 0; i < q.length; i++) {
            int l = q[i][0];
            int r = q[i][1];
            result[i] = prefixXor[r + 1] ^ prefixXor[l];
        }
        return result;
    }
}
