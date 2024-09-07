class Solution {
public:
    int distributeCandies(vector<int>& c) {
        int i,n=1;
        sort(c.begin(),c.end());
        for(i=0;i<c.size()-1;i++){
            if(c[i]!=c[i+1])
            n++;
        }
        return c.size()/2>n?n:c.size()/2;
    }
};