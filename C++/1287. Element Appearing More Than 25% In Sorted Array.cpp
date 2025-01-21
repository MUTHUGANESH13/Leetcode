class Solution {
public:
    int findSpecialInteger(vector<int>& a) {
        map<int,int>x;
        for(int i:a){
            x[i]++;
            if(a.size()/4 <x[i])
            return i;
        }
        return -1;
    }
};