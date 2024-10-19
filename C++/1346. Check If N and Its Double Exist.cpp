class Solution {
public:
    bool checkIfExist(vector<int>& a) {
        int i,j;
        for(i=0;i<a.size();i++){
            for(j=1+i;j<a.size();j++){
                if(a[i]==2*a[j] ||a[j]==2*a[i])
                return true;
            }
        }
        return false;
    }
};