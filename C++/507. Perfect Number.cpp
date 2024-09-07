class Solution {
public:
    bool checkPerfectNumber(int n) {
        int i,s=0;
        for(i=1;i<n;i++){
            if(n%i==0)
            s+=i;
        }
        if(s==n)
        return true;
        return false;
    }
};