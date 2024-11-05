class Solution {
public:
    int findFinalValue(vector<int>& n, int o) {
       sort(n.begin(),n.end());
       for(int i:n){
        if(i==o)
        o*=2;
       }
       return o;
    }
};