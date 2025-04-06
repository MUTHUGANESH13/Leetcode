class Solution {
public:
    bool isArraySpecial(vector<int>& n) {
        for(int i=1;i<n.size();i++){
            if(n[i-1]%2==n[i]%2)
            return false;
        }
        return true;
    }
};