class Solution {
    public int lengthOfLastWord(String s) {
        int i,l=0;
        for(i=s.length()-1;i>=0;i--)
        {
            if(s.charAt(i)!=' ')
            l++;
            else if(s.charAt(i)==' ' && l!=0)
            break;
            else
            continue;
        }
        return l;
    }
}