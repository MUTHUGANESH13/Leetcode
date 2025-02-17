class Solution {
public:
    int maxAscendingSum(vector<int>& n) {
        int s=n[0],m=0;
        for(int i=0;i<n.size()-1;i++){
            if(n[i]<n[i+1]){
                s+=n[i+1];
            }
            else{
                m=max(m,s);
            s=n[i+1];}
        }
        return max(s,m);
    }
};