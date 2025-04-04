class Solution {
    public boolean isValid(String w) {
        if(w.length()<3)
        return false;
        boolean a=false,b=false;
        for(int i=0;i<w.length();i++){
            char c=w.charAt(i);
            if((c<='z'&&c>='a')||(c<='Z'&&c>='A')){
                if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
                a=true;
                else
                b=true;
            }
            else if(c<='9'&&c>='0')
            continue;
            else
            return false;
        }
        return a&&b;
    }
}