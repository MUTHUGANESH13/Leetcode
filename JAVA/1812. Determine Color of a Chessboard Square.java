class Solution {
    public boolean squareIsWhite(String c) {
     int a=(int)(c.charAt(0));
     a+=(c.charAt(1)-'0');
     return a%2==1; 
    }
}