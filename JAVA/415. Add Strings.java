class Solution {
    public String addStrings(String n1, String n2) {
        int i = n1.length()- 1, j = n2.length() - 1, c = 0, a, b, s;
        String str = "";

        while (i >= 0 || j >= 0) {
            a = (i >= 0) ? n1.charAt(i) - '0' : 0;
            b = (j >= 0) ? n2.charAt(j) - '0' : 0;

            s = a + b + c;
            str = (s % 10) + str;
            c = s / 10;

            if (i >= 0) i--;
            if (j >= 0) j--;
        }

        if (c != 0) {
            str = (c) + str;
        }

        return str;
    }
}