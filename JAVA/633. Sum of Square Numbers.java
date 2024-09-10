class Solution {
    public boolean judgeSquareSum(int c) {
        long l=0,r=(long )Math.sqrt(c),s=0;
        while(l<=r){
            s=l*l+r*r;
            if(s==c)
            return true;
            else if(s>c)
            r--;
            else
            l++;
        }
        return false;
    }
}