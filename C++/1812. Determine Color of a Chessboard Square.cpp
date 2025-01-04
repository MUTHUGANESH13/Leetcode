class Solution {
public:
    bool squareIsWhite(string c) {
        int a=(int)(c[0]);
        a+=(c[1]-'0');
        return a%2==1;
    }
};