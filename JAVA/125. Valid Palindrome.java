class Solution {
    public boolean isPalindrome(String s) {
        s=s.toLowerCase();
        String a="";
        int i;
        for(i=0;i<s.length();i++){
            if((int)s.charAt(i)>96 && (int)s.charAt(i)<123||(int)s.charAt(i)> 47 && (int)s.charAt(i) < 58)
            a+=s.charAt(i);
        }
        for(i=0;i<a.length()/2;i++){
            if(a.charAt(i)!=a.charAt(a.length()-i-1))
            return false;
        }
        return true;
    }
}