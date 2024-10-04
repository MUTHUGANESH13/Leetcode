class Solution {
public:
    int generateKey(int n1, int n2, int n3) {
        int m1,m2,i;
        string s="";
        for(i=0;i<4;i++){
            m1=min(n1%10,n2%10);
            m2=min(m1,n3%10);
            s=to_string(m2)+s;
            n1/=10;
            n2/=10;
            n3/=10;
        }
        return(stoi(s));
    }
};