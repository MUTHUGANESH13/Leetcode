class Solution {
    public boolean checkString(String s) {
        int i,f=0;
        for(i=0;i<s.length()-1;i++)
        {
            if(s.charAt(i)=='b' && s.charAt(i+1)=='a')
            {
                f=1;
                break;
            }
            else
            continue;
        }
        return(f==0);
    }
}