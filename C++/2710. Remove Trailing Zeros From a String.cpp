class Solution {
public:
    string removeTrailingZeros(string n) {
        int i,k=0;
        for(i=n.size()-1;i>=0;i--){
            if(n[i]=='0')
            k++;
            else
            break;
        }
        return(n.substr(0,n.size()-k));
    }
};