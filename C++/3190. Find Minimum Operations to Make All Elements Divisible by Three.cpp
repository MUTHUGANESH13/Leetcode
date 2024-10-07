class Solution {
public:
    int minimumOperations(vector<int>& n) {
        int c=0;
        for(int i:n){
            if(i%3!=0)
            c++;
        }
        return c;
    }
};