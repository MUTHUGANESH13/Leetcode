class Solution {
    public boolean canChange(String s, String t) {
        int i=0,j=0;
        while(i<s.length()&&j<t.length()){
            while(i<s.length()&&s.charAt(i)=='_')
            i++;
            while(j<t.length()&&t.charAt(j)=='_')
            j++;
            if(i==s.length()||j==s.length())
            return i==s.length()&&j==s.length();
            if((s.charAt(i)!=t.charAt(j))||(s.charAt(i)=='L'&&i<j)||(s.charAt(i)=='R'&& i>j))
            return false;
            i++;
            j++;
        }
        return true;
    }
}