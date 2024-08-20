class Solution {
    public int maximumWealth(int[][] a) {
        int i,j,s,m=0;
        for(i=0;i<a.length;i++)
        {
            s=0;
            for(j=0;j<a[0].length;j++)
            {
                s+=a[i][j];
            }
            if(m<s)
            m=s;
        }
        return m;
    }
}