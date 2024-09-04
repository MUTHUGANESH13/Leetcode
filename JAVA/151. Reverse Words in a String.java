class Solution {
    public String reverseWords(String s) {
        int i = 0, j = s.length() - 1;
        String r = "", s1 = "";
        while (i <= j && s.charAt(i) == ' ') {
            i++;
        }
        while (j >= i && s.charAt(j) == ' ') {
            j--;
        }
        while (i <= j) {
            char c = s.charAt(i);
            if (c == ' ') {
                if (!r.isEmpty()) {
                    s1 = r + (s1.isEmpty() ? "" : " ") + s1; 
                    r = ""; 
                }
                while (i <= j && s.charAt(i) == ' ') {
                    i++;
                }
                continue;
            }
            r += c;
            i++;
        }
        if (!r.isEmpty()) {
            s1 = r + (s1.isEmpty() ? "" : " ") + s1;
        }
        return s1;
    }
}
