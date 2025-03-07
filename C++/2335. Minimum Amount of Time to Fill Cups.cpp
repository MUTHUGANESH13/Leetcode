class Solution {
public:
    int fillCups(vector<int>& a) {
        sort(a.begin(),a.end());
        int c=0;
        while(a[1]!=0 && a[2]!=0){
            c++;
            a[1]--;
            a[2]--;
            sort(a.begin(),a.end());
        }
        return c+a.back();
    }
};