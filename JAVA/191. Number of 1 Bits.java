class Solution {
    public int hammingWeight(int n) {
        int x=0;
        while(n!=0){
            if(n%2==1)
            x++;
            n/=2;
        }
        return x;
    }
}