class Solution {
public:
    int maxFrequencyElements(vector<int>& n) {
        map<int,int>m;
        for(int i:n){
            m[i]++;
        }
        int max=0,c=0;
        for(auto i:m){
            if(i.second>max)
            max=i.second;
        }
        for(auto i:m){
            if(max==i.second)
            c++;
        }
        return max*c;
    }
};