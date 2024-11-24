class Solution {
    public boolean isSubsequence(String s, String t) {
        int i,f=0;
        for(i=0;i<t.length() && f<s.length();i++){
            if(t.charAt(i)==s.charAt(f))
            f++;
        }
        return f==s.length();
    }
}