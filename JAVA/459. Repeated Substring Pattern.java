class Solution {
    public boolean repeatedSubstringPattern(String s) {
        String n=s+s;
        String k=n.substring(1,n.length()-1);
        return(k.contains(s));
    }
}