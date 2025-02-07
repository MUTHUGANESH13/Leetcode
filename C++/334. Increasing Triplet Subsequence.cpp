class Solution {
public:
    bool increasingTriplet(vector<int>& n) {
        int t=INT_MIN,s=INT_MIN,c=INT_MIN;
        for(int i=n.size()-1;i>=0;i--){
            if(t<n[i])
            t=n[i];
            else if(t>n[i] && s<n[i])
            s=n[i];
            else if(t>n[i] && s>n[i] && t>s)
            return true;
        }
        return false;
    }
};