class Solution {
public:
    int sumOfSquares(vector<int>& n) {
        int s=0,i;
        for(i=0;i<n.size();i++){
            if(n.size()%(i+1)==0)
            s=s+(n[i]*n[i]);
        }
        return s;
    }
};