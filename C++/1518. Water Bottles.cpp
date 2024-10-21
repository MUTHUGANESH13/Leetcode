class Solution {
    public int numWaterBottles(int b, int e) {
        int k=b,r;
        while(b>=e)
        {
            r=b/e;
            b=r+(b%e);
            k+=r;
        }
        return k;
        
    }
}