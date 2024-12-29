class Solution {
public:
    long long countVowels(string w) {
        long long c=0;
        for(int i=0;i<w.size();i++){
            if(w[i]=='a'||w[i]=='e'||w[i]=='i'||w[i]=='o'||w[i]=='u')
            c+=(i+1)*(w.size()-i);
        }
        return c;
    }
};