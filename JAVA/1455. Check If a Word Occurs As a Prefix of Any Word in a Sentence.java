class Solution {
    public int isPrefixOfWord(String s, String p) {
        String w[]=s.split(" ");
        int i=1;
        for(String c:w){
            if(p.length()<=c.length()){
            if(p.equals(c.substring(0,p.length())))
            return i;}
            i++;
        }
        return -1;
    }
}