class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        set<int>n(nums.begin(),nums.end());
        int m=0,k;
        long t;
        for(auto a:n){
            k=0;
            t=a;
            while(n.find(t)!=n.end()){
                k++;
                if (t > INT_MAX / t) break;  
                t = t * t;
            }
            if(k>m)
            m=k;
        }
        if(m==1)
        return -1;
        return m;
    }
};