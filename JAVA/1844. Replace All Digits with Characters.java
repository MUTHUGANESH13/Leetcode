class Solution {
    public String replaceDigits(String s) {
        int i,k;
        String a="";
        a+=s.charAt(0);
        for(i=1;i<s.length();i++){
            if(i%2==0)
            a=a+s.charAt(i);
            else{
                k=(int)(s.charAt(i));
                a=a+(char)((s.charAt(i-1)+k)-'0');
            }
        }
        return a;
    }
}