class Solution {
public:
    int lengthOfLastWord(string s) {
        int i,l=0;
        for(i=s.size()-1;i>=0;i--)
        {
            if(s[i]!=' ')
            l++;
            else if(s[i]==' ' && l!=0)
            break;
            else
            continue;
        }
        return l;
    }
};