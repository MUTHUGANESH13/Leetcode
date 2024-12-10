class Solution {
    public String makeFancyString(String s) {
        if(s.length() < 2) return s;
        StringBuilder k = new StringBuilder();
        k.append(s.charAt(0)).append(s.charAt(1));
        for(int x = 2; x < s.length(); x++) {
            if(s.charAt(x) == s.charAt(x - 1) && s.charAt(x) == s.charAt(x - 2)) continue;
            k.append(s.charAt(x));
        }
        return k.toString();
    }
}
