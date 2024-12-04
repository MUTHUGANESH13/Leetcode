class Solution {
    public int countGoodSubstrings(String s) {
        int i,c=0;
        for(i=0;i<s.length()-2;i++){
            if(is(s.substring(i,i+3)))
            c++;
        }
        return c;
    }
    private boolean is(String s){
        if((s.charAt(0)!=s.charAt(1))&&(s.charAt(1)!=s.charAt(2))&&(s.charAt(0)!=s.charAt(2)))
        return true;
        return false;
    }
}