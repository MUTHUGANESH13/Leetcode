class Solution {
public:
    vector<int> getFinalState(vector<int>& n, int k, int m) {
        for(int i=0;i<k;i++){
            int min=n[0],x=0;
            for(int j=1;j<n.size();j++){
                if(min>n[j]){
                    min=n[j];
                    x=j;
                }
            }
            n[x]*=m;
        }
        return n;
    }
};