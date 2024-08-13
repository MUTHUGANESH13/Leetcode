class Solution {
public:
    bool hasTrailingZeros(vector<int>& n) {
        int k=0;
        for(int i:n){
            if(i%2==0)
            k++;
            if(k==2)
            return true;
        }
        return false;
    }
};