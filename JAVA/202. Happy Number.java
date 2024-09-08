class Solution {
    public boolean isHappy(int n) {
        int x,r; 
        while(n>9){
            x=0;
            while(n!=0){
                r=n%10;
                x=x+(r*r);
                n/=10;
            }
            n=x;
        }
        if(n==1 || n==7)
        return true;
        return false;
    }
}