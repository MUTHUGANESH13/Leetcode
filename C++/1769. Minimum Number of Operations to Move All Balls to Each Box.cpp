class Solution {
public:
    vector<int> minOperations(string b) {
        vector<int>a(b.size());
        for(int i=0;i<b.size();i++){
            if(b[i]=='1'){
                for(int j=0;j<b.size();j++){
                    a[j]+=abs(j-i);
                }
            }
        }
        return a;
    }
};