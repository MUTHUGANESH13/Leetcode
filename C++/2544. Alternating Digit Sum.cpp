class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int>a;
        int s=0,i;
        while(n!=0){
            a.push_back(n%10);
            n/=10;
        }
        n=-1;
        for(i=a.size()-1;i>=0;i--){
            n=-n;
            s+=(a[i]*n);
        }
        return s;
    }
};