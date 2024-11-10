class Solution {
public:
    int longestSubarray(vector<int>& n) {
        int m,a=0,k=0;
        m=*max_element(n.begin(),n.end());
        for(int i:n){
            if(i==m)
            a++;
            else
            a=0;
            k=max(a,k);
        }
        return k;
    }
};