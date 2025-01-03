class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& m) {
     long long c=0;
     int s=INT_MAX,n=0;
     for(int i=0;i<m.size();i++){
        for(int j:m[i]){
            c+=abs(j);
            if(j<0)
            n++;
            s=min(s,abs(j));
        }
     }
     if(n%2==1)
     c-=2*s;
     return c;
    }
};