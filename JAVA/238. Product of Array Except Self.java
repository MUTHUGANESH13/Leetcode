class Solution {
    public int[] productExceptSelf(int[] n) {
        int z = 0, t = -1;
        long s = 1;

        for (int i = 0; i < n.length; i++) {
            if (n[i] == 0) {
                z++;
                t = i;
            } else {
                s *= n[i];
            }
        }

        int[] a = new int[n.length];

        if (z > 1) {
            return a;
        }
        
        if (z == 1) {
            a[t] = (int) s;
            return a;
        }

        for (int i = 0; i < n.length; i++) {
            a[i] = (int) (s / n[i]);
        }

        return a;
    }
}