class Solution {
    public int romanToInt(String s) {
        int i,v=0;
        for(i=0;i<s.length();i++)
        {
            if(s.charAt(i)=='I')
            v++;
            else if(s.charAt(i)=='V')
            v=v+5;
            else if(s.charAt(i)=='X')
            v=v+10;
            else if(s.charAt(i)=='L')
            v=v+50;
            else if(s.charAt(i)=='C')
            v+=100;
            else if(s.charAt(i)=='D')
            v+=500;
            else if(s.charAt(i)=='M')
            v+=1000;
        }
        for(i=0;i<s.length()-1;i++)
        {
            if(s.charAt(i)=='I'&&(s.charAt(i+1)=='V'||s.charAt(i+1)=='X'))
            v=v-2;
            else if(s.charAt(i)=='X'&&(s.charAt(i+1)=='L'||s.charAt(i+1)=='C'))
            v=v-20;
            else if(s.charAt(i)=='C'&&(s.charAt(i+1)=='D'||s.charAt(i+1)=='M'))
            v=v-200;
        }
        return v;
    }
}