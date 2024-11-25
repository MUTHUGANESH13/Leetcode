class Solution {
    public int maximumSwap(int num) {
        String s = Integer.toString(num);
        int i, j,x, m = num;
        for (i = 0; i < s.length(); i++) {
            for (j = i + 1; j < s.length(); j++) {
                char[] c = s.toCharArray();
                char t = c[i];
                c[i] = c[j];
                c[j] = t;
                x = Integer.parseInt(new String(c));
                if (x > m) 
                m = x;
            }
        }
        return m;
    }
}
