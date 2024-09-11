class Solution {
    public String toLowerCase(String s) {
        String k="";
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)>64 && s.charAt(i)<91){
           char x= s.charAt(i);
            k+=(char)(x+32);
           }
           else
           k=k+s.charAt(i);
        }
        return k;
    }
}