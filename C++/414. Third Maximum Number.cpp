class Solution {
public:
    int thirdMax(vector<int>& n) {
        int m=1;
        sort(n.rbegin(),n.rend());
        for(int i=1;i<n.size();i++){
            if(n[i-1]!=n[i])
            m++;
            if(m==3)
            return n[i];
        }
        return n[0];
    }
};