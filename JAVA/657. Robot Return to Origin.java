class Solution {
    public boolean judgeCircle(String m) {
        int r=0,l=0,i;
        for(i=0;i<m.length();i++)
        {
            if(m.charAt(i)=='R')
            r++;
            else if(m.charAt(i)=='L')
            r--;
            else if(m.charAt(i)=='U')
            l++;
            else
            l--;
        }
        return(l==0 && r==0);
    }
}