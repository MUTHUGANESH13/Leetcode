class Solution {
    public :
    int b(int n){
        int i=0;
        while(n!=0){
            if(n%2==1)
            i++;
            n/=2;
        }
        return i;
    }
    int minBitFlips(int s, int g) {
        return(b(s^g));
    }
};