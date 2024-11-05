class Solution {
public:
    int minimumSum(int n) {
        vector<int>a;
        while(n!=0){
            a.push_back(n%10);
            n/=10;
        }
        sort(a.begin(),a.end());
        return(((10*a[0])+a[2])+((10*a[1])+a[3]));
    }
};