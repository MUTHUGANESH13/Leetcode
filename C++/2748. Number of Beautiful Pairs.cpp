class Solution {
public:
    int gcd(int a,int b){
        if(b==0)
        return a;
        return gcd(b,a%b);
    }
    int countBeautifulPairs(vector<int>& n) {
        int c=0;
        for(int i=0;i<n.size();i++){
            string s=to_string(n[i]);
            for(int j=i+1;j<n.size();j++){
                if(gcd(n[j]%10,s[0]-'0')==1)
                c++;
            }
        }
        return c;
    }
};