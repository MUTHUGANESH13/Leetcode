class Solution {
    public boolean canTransform(String s, String t) {
        int i=0,j=0;
        while(i<s.length()&&j<t.length()){
            while(i<s.length()&&s.charAt(i)=='X')
            i++;
            while(j<t.length()&&t.charAt(j)=='X')
            j++;
            if(i==s.length()||j==s.length())
            return i==s.length()&&j==s.length();
            if((s.charAt(i)!=t.charAt(j))||(s.charAt(i)=='L'&&i<j)||(s.charAt(i)=='R'&& i>j))
            return false;
            i++;
            j++;
        }
        while (i < s.length() && s.charAt(i) == 'X') i++;
        while (j < t.length() && t.charAt(j) == 'X') j++;
        return i == s.length() && j == t.length();
    }
}