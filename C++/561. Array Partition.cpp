class Solution {
public:
    int arrayPairSum(vector<int>& n) {
        int s=0,i;
        sort(n.begin(),n.end());
        for(i=0;i<n.size();i+=2){
            s+=n[i];
        }
        return s;
    }
};