class Solution {
public:
    bool checkTwoChessboards(string c1, string c2) {
        int a=(int)(c1[0]);
        int b=(int)(c2[0]);
        a+=(c1[1]-'0');
        b+=(c2[1]-'0');
        return (a%2==0)==(b%2==0);
    }
};