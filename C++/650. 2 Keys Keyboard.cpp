class Solution {
public:
    int minSteps(int n) {
        int r=0;
        int x=2;
        while(n>1){
            while(n%x==0){
                r=r+x;
                n=n/x;
            }
            x++;
        }
        return r;
    }
};