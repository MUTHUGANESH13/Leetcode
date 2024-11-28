class Solution {
    public boolean rotateString(String s, String g) {
        if(s.length()!=g.length())
        return false;
        String k=s+s;
        return k.contains(g);
    }
}