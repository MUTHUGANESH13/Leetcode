class Solution {
public:
    bool c(string a[3][3],string c)
    {
        for(int i=0;i<3;i++)
        {
            if(a[i][0]==c && a[i][1]==c && a[i][2]==c)
            return true;
            if(a[0][i]==c && a[1][i]==c && a[2][i]==c)
            return true;
        }
        if(a[1][1]==c && ((a[0][0]==c && a[2][2]==c) ||(a[0][2]==c && a[2][0]==c)))
        return true;
        return false;
    }
    string tictactoe(vector<vector<int>>& m) {
        string a[3][3];
        for(int i=0;i<m.size();i++)
        {
            if(i%2==0)
            a[m[i][0]][m[i][1]]="X";
            else
            a[m[i][0]][m[i][1]]="O";
        }
        bool A=c(a,"X");
        bool B=c(a,"O");
        if(!A && !B && m.size()==9)
        return "Draw";
        else if(A)
        return "A";
        else if(B)
        return "B";
        return "Pending";
    }
};