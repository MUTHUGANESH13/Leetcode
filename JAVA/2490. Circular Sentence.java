class Solution {
    public boolean isCircularSentence(String s) {
        String w[]=s.split(" ");
        for(int i=0;i<w.length-1;i++){
            if(w[i+1].charAt(0)!=w[i].charAt(w[i].length()-1))
            return false;
        }
        return(s.charAt(0)==s.charAt(s.length()-1));
    }
}