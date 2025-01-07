class Solution {
    public boolean[] isArraySpecial(int[] n, int[][] q) {
        int[] a = new int[n.length - 1];
        for (int i = 0; i < n.length - 1; i++) {
            a[i] = (n[i] % 2 == n[i + 1] % 2) ? 1 : 0;
        }
        
        int[] prefix = new int[a.length + 1];
        for (int i = 0; i < a.length; i++) {
            prefix[i + 1] = prefix[i] + a[i];
        }
        
        boolean[] result = new boolean[q.length];
        for (int i = 0; i < q.length; i++) {
            if (prefix[q[i][1]] - prefix[q[i][0]] > 0) {
                result[i] = false;
            } else {
                result[i] = true;
            }
        }
        
        return result;
    }
}
