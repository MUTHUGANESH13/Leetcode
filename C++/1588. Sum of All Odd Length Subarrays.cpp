class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& a) {
        int i,j,k;
        long long s=0;
        for(i=1;i<=a.size();i+=2){
                for(j=0;j<=a.size()-i;j++){
                    for(k=j;k<j+i;k++){
                        s=s+a[k];
                    }
                }
        }
        return s;
    }
};