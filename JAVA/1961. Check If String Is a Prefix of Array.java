class Solution {
    public boolean isPrefixString(String s, String[] w) {
        String k="";
        for(String c:w){
            k+=c;
            if(k.equals(s))
            return true;
        }
        return false;
    }
}