class Solution {
    public boolean checkTwoChessboards(String c1, String c2) {
        int a=(int)(c1.charAt(0));
        int b=(int)(c2.charAt(0));
        a+=(c1.charAt(1)-'0');
        b+=(c2.charAt(1)-'0');
        return (a%2==0)==(b%2==0);
    }
}