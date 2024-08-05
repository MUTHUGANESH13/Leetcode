class Solution {
    public int minimumDeletions(String s) {
        int i,r=0,b=0;
        for(i=0;i<s.length();i++)
        {
            if(s.charAt(i)=='b')
            b++;
            else if(b!=0)
            {
                b--;
                r++;
            }

        }
        return r;
    }
}