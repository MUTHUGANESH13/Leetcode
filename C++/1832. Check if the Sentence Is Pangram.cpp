class Solution {
public:
    bool checkIfPangram(string s) {
        set<int>a;
        for(char c:s){
            a.insert(c);
        if(a.size()==26)
        return true;
        }
        return false;
    }
};