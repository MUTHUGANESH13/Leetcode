class Solution {
public:
    string addBinary(string a, string b) {
        string str;
        int i = a.length()-1,j=b.length()-1;
        int c = 0,k=0;
        while(i>=0 && j>=0){
            if(a[i]=='1' && b[j]=='1'){
                if(c==1){
                    str.push_back('1');
                    c=1;
                }
                else{
                    str.push_back('0');
                    c=1;
                }
            }
            else if((a[i]=='0' && b[j]=='1') || (a[i]=='1' && b[j]=='0')){
                if(c==1){
                    str.push_back('0');
                    c=1;
                }
                else{
                    str.push_back('1');
                }
            }
            else{
                if(c==1){
                    str.push_back('1');
                    c=0;
                }
                else{
                    str.push_back('0');
                }
            }
            i--;j--;
        }
        while(i>=0){
            if(a[i]=='1'){
                if(c==1){
                    str.push_back('0');
                    c=1;
                }
                else{
                    str.push_back('1');
                }
            }
            else{
                if(c==1){
                    str.push_back('1');
                    c=0;
                }
                else{
                    str.push_back('0');
                }
            }
            i--;
        }
        while(j>=0){
            if(b[j]=='1'){
                if(c==1){
                    str.push_back('0');
                    c=1;
                }
                else{
                    str.push_back('1');
                }
            }
            else{
                if(c==1){
                    str.push_back('1');
                    c=0;
                }
                else{
                    str.push_back('0');
                }
            }
            j--;
        }
        if(c==1){
            str.push_back('1');
        }
        reverse(str.begin(),str.end());
        return str;
    }
};