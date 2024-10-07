class Solution {
public:
    int countCompleteDayPairs(vector<int>& h) {
        int c=0,i,j;
        for(i=0;i<h.size();i++){
            for(j=i+1;j<h.size();j++){
                if((h[i]+h[j])%24==0)
                c++;
            }
        }
        return c;
    }
};