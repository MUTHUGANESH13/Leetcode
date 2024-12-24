class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& a) {
        int r=a.size()-1,x,l=0;
        while(r>0&&a[r]>=a[r-1])
        r--;
        x=r;
        while(l<r&&(l==0||a[l-1]<=a[l])){
            while(r<a.size()&& a[l]>a[r])
            r++;
            x=min(x,r-l-1);
            l++;
        }
        return x;
    }
};