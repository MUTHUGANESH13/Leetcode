class Solution {
public:
    int maximumSwap(int num) {
        string s=to_string(num);
        int i,j,m=num;
        for(i=0;i<s.size();i++){
            for(j=i+1;j<s.size();j++){
                swap(s[i],s[j]);
                if(stoi(s)>m)
                m=stoi(s);
                swap(s[i],s[j]);
            }
        }
        return m;
    }
};