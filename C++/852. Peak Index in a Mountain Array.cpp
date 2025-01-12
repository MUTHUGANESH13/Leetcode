class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
        if(a[0]>a[1])
        return 0;
        for(int i=1;i<a.size()-1;i++){
            if(a[i]>a[i+1]&&a[i]>a[i-1])
            return i;
        }
        if(a.back()>a[a.size()-2])
        return a.size()-1;
        return -1;
    }
};