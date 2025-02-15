class Solution {
public:
    bool check(vector<int>& n) {
        int c=0;
        for(int i=0;i<n.size()-1;i++){
            if(n[i]>n[i+1])
            c++;
        }
        if(n[0]<n.back())
        c++;
        return c<2;
    }
};