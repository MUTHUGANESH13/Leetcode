class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)
        return 1;
        int i=0,r=0;
        string s="";
        while(n!=0){
            if(n%2==0)
            s+='1';
            else
            s+='0';
            n/=2;
        }
        for(char c:s){
            if(c=='1')
            r+=pow(2,i);
            i++;
        }
        return r;
    }
};