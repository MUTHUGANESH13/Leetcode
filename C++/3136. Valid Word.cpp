class Solution {
public:
    bool isValid(string w) {
        if(w.size()<3)
        return false;
        bool a=false,b=false;
        for(char c:w){
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
};