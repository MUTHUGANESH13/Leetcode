class Solution {
public:
    long pov(vector<int>& n,int v){
        int l=0,r=n.size()-1;
        long a=0;
        while(l<r){
            int s=n[l]+n[r];
            if(s<v)
            a+=r-l++;
            else
            r--;
        }
        return a;
    }
    long long countFairPairs(vector<int>& n, int l, int u) {
        sort(n.begin(),n.end());
        return pov(n,u+1)-pov(n,l);
    }
};