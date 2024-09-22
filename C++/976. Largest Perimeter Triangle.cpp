class Solution {
public:
    int largestPerimeter(vector<int>& n) {
        sort(n.rbegin(),n.rend());
        for(int i=0;i<n.size()-2;i++){
            if(n[i]<n[i+1]+n[i+2])
            return (n[i]+n[i+1]+n[i+2]);
        }
        return 0;

    }
};