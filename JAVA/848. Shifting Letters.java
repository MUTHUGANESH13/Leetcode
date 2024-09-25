class Solution {
    public String shiftingLetters(String s, int[] a) {
        int i, p = 0;
        char[] r = s.toCharArray();
        for (i = s.length() - 1; i >= 0; i--) {
            p = (p + a[i]) % 26; 
            r[i] = (char) ((r[i] - 'a' + p) % 26 + 'a'); 
        }
        return new String(r); 
    }
}