class Solution {
public:
    int duplicateNumbersXOR(vector<int>& n) {
        int c=0;
        map<int,int>m;
        for(int i:n){
            m[i]++;
            if(m[i]==2)
            c^=i;
        }
        return c;
    }
};