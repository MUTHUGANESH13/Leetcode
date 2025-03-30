class Solution {
public:
    int countTestedDevices(vector<int>& b) {
        int c=0;
        for(int i=0;i<b.size();i++){
            if(b[i]>0){
                c++;
                for(int j=i+1;j<b.size();j++)
                b[j]--;
            }
        }
        return c;
    }
};