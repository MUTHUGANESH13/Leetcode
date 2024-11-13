class Solution {
public:
    int countDigits(int n) {
        int s=n,c=0;
        while(s!=0){
            if(s%10!=0){
                if(n%(s%10)==0)
                c++;
            }
            s/=10;
        }
        return c;
    }
};