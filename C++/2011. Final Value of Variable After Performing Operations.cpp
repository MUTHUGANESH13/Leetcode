class Solution {
public:
    int finalValueAfterOperations(vector<string>& s) {
        int x=0;
        for(string c:s){
            if(c=="X++"||c=="++X")
            x++;
            else
            x--;
        }
        return x;
    }
};