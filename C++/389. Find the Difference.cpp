class Solution {
public:
    char findTheDifference(string s, string t) {
        int i;
        char a;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s.size()>t.size())
        {
            for(i=0;i<t.size();i++)
            {
                if(t[i]!=s[i])
                {a=s[i];
                break;}
            }
            if(a==NULL)
            a=s[s.size()-1];
        }
        else
        {
            for(i=0;i<s.size();i++)
            {
                if(s[i]!=t[i])
                {a=t[i];
                break;}
            }
            if(a==NULL)
            a=t[t.size()-1];
        }
        return a;
    }
};