class Solution {
public:
int i=0;
    bool p(string e){
        if(e[i]=='t'){
            i++;
            return true;
        }
        if(e[i]=='f'){
            i++;
            return false;
        }
        if(e[i]=='!'){
            i+=2;
            bool a=!p(e);
            i++;
            return a;
        }
        bool is=e[i]=='&';
        bool a=is;
        i+=2;
        while(e[i]!=')'){
            bool pa=p(e);
            if(is)
            a&=pa;
            else
            a|=pa;
            if(e[i]==',')
            i++;
        }
        i++;
        return a;
    }
    bool parseBoolExpr(string e) {
        return p(e);
    }
};