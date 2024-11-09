class Solution {
public:
    int mostFrequentEven(vector<int>& n) {
        unordered_map<int,int>x;
        int s=-1,m=-1;
        for(int i:n)
        {
            if(i%2==0)
            x[i]++;
        }
        for(const auto& i:x)
        {
            if(i.second>s || (i.second==s && i.first<m)){
            s=i.second;
            m=i.first;}
        }
        return m;
    }
};