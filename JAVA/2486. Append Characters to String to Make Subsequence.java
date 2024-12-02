class Solution {
    public int appendCharacters(String s, String t) {
        int i,f=0;
        for(i=0;i<s.length()&&f<t.length();i++){
            if(s.charAt(i)==t.charAt(f))
            f++;
        }
        return t.length()-f;
    }
}