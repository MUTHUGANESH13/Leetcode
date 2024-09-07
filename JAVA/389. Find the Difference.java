class Solution {
    public char findTheDifference(String s, String t) {
        char a[]=s.toCharArray();
        char b[]=t.toCharArray();
        Arrays.sort(a);
        Arrays.sort(b);
        char n='\0';
        if(s.length()>t.length())
        {
            for(int i=0;i<t.length();i++)
            {
                if(a[i]!=b[i])
                {
                    n=a[i];
                    break;
                }
            }
            if(n=='\0')
            n=a[a.length-1];
        }
        else
        {
            for(int i=0;i<s.length();i++)
            {
                if(a[i]!=b[i])
                {
                    n=b[i];
                    break;
                }
            }
            if(n=='\0')
            n=b[b.length-1];
        }
        return n;
    }
}