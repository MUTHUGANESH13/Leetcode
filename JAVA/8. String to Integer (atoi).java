class Solution {
    public int myAtoi(String s) {
        int i = 0, k = 1;
        long d = 0;
        while (i < s.length() && s.charAt(i) == ' ')
            i++;
        if (i < s.length() && s.charAt(i) == '-') {
            k = -1;
            i++;
        } else if (i < s.length() && s.charAt(i) == '+')
            i++;
        while (i < s.length() && s.charAt(i) >= '0' && s.charAt(i) <= '9') {
            d = d * 10 + (s.charAt(i++) - '0');
            if (d * k > Integer.MAX_VALUE)
                return Integer.MAX_VALUE;
            if (d * k < Integer.MIN_VALUE)
                return Integer.MIN_VALUE;
        }
        return (int) (d * k);
    }
}
