class Solution {
public:
    int findMaxK(vector<int>& n) {
        sort(n.begin(),n.end());
        int i=0,j=n.size()-1;
        while(i<j){
            if(-n[i]>n[j])
            i++;
            if(-n[i]<n[j])
            j--;
            if(-n[i]==n[j])
            return n[j];
        }
        return -1;
    }
};