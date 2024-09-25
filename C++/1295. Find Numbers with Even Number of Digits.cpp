class Solution {
public:
    int findNumbers(vector<int>& n) {
        int i,r=0,k;
        for(i=0;i<n.size();i++){
            int s=0;
            k=n[i];
            while(k!=0){
                s++;
                k/=10;
            }
            if(s%2==0)
            r++;
        }
        return r;
    }
};