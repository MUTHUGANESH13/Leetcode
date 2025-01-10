class Solution {
public:
    int minOperations(string s) {
        int c=0,k=0;
        for(int i=0;i<s.size();i++){
            if(i%2==0&&s[i]!='0')c++;
            if(i%2==1&&s[i]!='1')c++;
            if(i%2==1&&s[i]!='0')k++;
            if(i%2==0&&s[i]!='1')k++;            
        }
        return min(c,k);
    }
};