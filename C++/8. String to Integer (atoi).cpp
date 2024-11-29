class Solution {
public:
    int myAtoi(string s) {
        int i=0,k=1;
        long long int d=0;
        while(s[i]==' ')
        i++;
        if(s[i]=='-'){
        k=-1;
        i++;}
        else if(s[i]=='+'){
        k=1;i++;}
        while(s[i]>='0'&&s[i]<='9'){
        d=d*10+(s[i++]-'0');
        if(d*k>INT_MAX)
        return INT_MAX;
        if(d*k<INT_MIN)
        return INT_MIN;
        }
        return d*k;
    }
};
