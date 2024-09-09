class Solution {
public:
    bool judgeSquareSum(int c) {
        double i,a;
        for(i=0;i*i<=c;i++){
            a=sqrt(c-i*i);
            if(a==(int)a)
            return true;
        }
        return false;
    }
};