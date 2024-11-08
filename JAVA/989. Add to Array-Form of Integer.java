class Solution {
    public List<Integer> addToArrayForm(int[] n, int k) {
        int i = n.length - 1;
        int r;
        boolean c = false;
        List<Integer> a = new ArrayList<>();
        while (k != 0 || i >= 0) {
            r = k % 10;
            k /= 10;

            if (i >= 0) {
                r += n[i];
                i--;
            }

            if (c) {
                r += 1;
            }

            if (r > 9) {
                r %= 10;
                c = true;
            } else {
                c = false;
            }

            a.add(0, r); 
        }
        if (c) {
           a.add(0, 1);
        }
        return a;
    }
}
