class Solution {
public:
    bool areNumbersAscending(string s) {
        bool t=false;
        string k="";
        int a=0;
        for(char c:s){
            if(t&&c==' '){
                if(stoi(k)<=a)
                return false;
                else
                a=stoi(k);
                k="";
                t=false;
            }
            if(c<='9'&&c>='0'){
                t=true;
                k+=c;
            }
        }
        if(t){
            if(stoi(k)<=a)
            return false;
        }
        return true;
    }
};