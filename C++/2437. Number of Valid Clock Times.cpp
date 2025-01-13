class Solution {
public:
    int countTime(string t) {
        int s=1;
        if(t[4]=='?')
        s*=10;
        if(t[3]=='?')
        s*=6;
        if(t[0]=='?'&&t[1]=='?'){
        s*=24;
        return s;
        }
        if(t[0]=='2'&&t[1]=='?')
        s*=4;
        if((t[0]=='1'||t[0]=='0')&&t[1]=='?')
        s*=10;
        if((t[1])<'4'&&t[0]=='?')
        s*=3;
        if((t[1])>='4'&&t[0]=='?')
        s*=2;
        return s;
        

        
    }
};