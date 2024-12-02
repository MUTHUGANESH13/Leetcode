class Solution {
    public String truncateSentence(String s, int k) {
        String a="";
        int i;
        for(i=0;i<s.length();i++){
            if(s.charAt(i)==' ')
            k--;
            if(k==0)
            break;
            a+=s.charAt(i);
        }
        return a;
    }
}