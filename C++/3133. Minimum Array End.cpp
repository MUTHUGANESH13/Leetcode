class Solution {
public:
    long long minEnd(int n, int x) {
        long long a=x;
        for(int i=1;i<n;i++){
            a=(a+1)|x;
        }
        return a;
    }
};