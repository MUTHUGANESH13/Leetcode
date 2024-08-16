class Solution {
    private boolean c(String[][] a,String c)
    {
        for(int i=0;i<3;i++)
        {
            if(a[i][0].equals(c) && a[i][1].equals(c) && a[i][2].equals(c))
            return true;
            if(a[0][i].equals(c) && a[1][i].equals(c) && a[2][i].equals(c))
            return true;
        }
        if (a[0][0].equals(c) && a[1][1].equals(c) && a[2][2].equals(c))
            return true;
        if (a[0][2].equals(c) && a[1][1].equals(c) && a[2][0].equals(c))
            return true;
        return false;
    }
    public String tictactoe(int[][] m) {
        String[][] a=new String[3][3];
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                a[i][j] = "";
            }
        }
        for(int i=0;i<m.length;i++)
        {
            if(i%2==0)
            a[m[i][0]][m[i][1]]="X";
            else
            a[m[i][0]][m[i][1]]="O";
        }
        boolean A=c(a,"X");
        boolean B=c(a,"O");
        if(!A && !B && m.length==9)
        return "Draw";
        else if(A)
        return "A";
        else if(B)
        return "B";
        return "Pending";
    }
}