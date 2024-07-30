class Solution {
    public boolean isPerfectSquare(int num) {
       double aa;
       aa=Math.sqrt(num);
       int a=(int)aa;
       if(a*a==num)
       return true;
       else
       return false;
    }
}