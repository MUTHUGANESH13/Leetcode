class Solution {
public:
    int maxChunksToSorted(vector<int>& a) {
        int c=0,m=-1;
        for(int i=0;i<a.size();i++){
            m=max(a[i],m);
            if(m==i)
            c++;
        }
        return c;
    }
};