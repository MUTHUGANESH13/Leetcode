class Solution {
public:
    int timeRequiredToBuy(vector<int>& t, int k) {
        int c=0,i=0;
        while(t[k]>0){
            if(t[i]>0){
                t[i]--;
                c++;
            }
            i++;
            i%=t.size();
        }
        return c;
    }
};