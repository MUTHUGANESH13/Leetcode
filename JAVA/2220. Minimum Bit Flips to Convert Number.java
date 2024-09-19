class Solution {
    public int minBitFlips(int s, int g) {
        int i=0,n=s^g;
        while(n!=0){
            if(n%2==1)
            i++;
            n/=2;
        }
        return i;
    }
}