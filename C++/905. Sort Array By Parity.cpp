class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& n) {
        vector<int>o,e;
        for(int i:n){
            if(i%2==0)
            e.push_back(i);
            else
            o.push_back(i);
        }
        for(int i:o){
            e.push_back(i);
        }
        return e;
    }
};