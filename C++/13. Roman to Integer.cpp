class Solution {
public:
    int romanToInt(string s) {
        int i,v=0;
        for(i=0;s[i]!='\0';i++);
       int len=i;
        for(i=0;i<len;i++)
        {
            if(s[i]=='I')
            v++;
            else if(s[i]=='V')
            v=v+5;
            else if(s[i]=='X')
            v=v+10;
            else if(s[i]=='L')
            v=v+50;
            else if(s[i]=='C')
            v=v+100;
            else if(s[i]=='D')
            v=v+500;
            else if(s[i]=='M')
            v=v+1000;
        }
        for(i=0;i<len-1;i++)
        {
            if(s[i]=='I'&&(s[i+1]=='V'||s[i+1]=='X'))
            v=v-2;
            else if(s[i]=='X'&&(s[i+1]=='L'||s[i+1]=='C'))
            v=v-20;
            else if(s[i]=='C'&&(s[i+1]=='D'||s[i+1]=='M'))
            v=v-200;
        }
        return(v);
    }
};
