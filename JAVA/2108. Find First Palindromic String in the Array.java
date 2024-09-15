class Solution {
    public String firstPalindrome(String[] w) {
        for(int i=0;i<w.length;i++){
            if(is(w[i])==true)
            return(w[i]);
        }
        return "";
    }
    private boolean is(String s){
        int i;
        for(i=0;i<s.length()/2;i++){
            if(s.charAt(i)!=s.charAt(s.length()-i-1))
            return false;
        }
        return true;
    }
}