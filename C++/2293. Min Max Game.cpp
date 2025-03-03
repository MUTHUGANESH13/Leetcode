class Solution {
public:
    int minMaxGame(vector<int>& n) {
        if(n.size()<2)
        return n.back();
        vector<int>a;
        for(int i=0;i<n.size()/2;i++){
            if(i%2==0)
            a.push_back(min(n[2*i],n[2*i+1]));
            else
            a.push_back(max(n[2*i],n[i*2+1]));
        }
        return minMaxGame(a);
    }
};