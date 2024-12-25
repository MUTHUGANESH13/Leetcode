class Solution {
public:
    vector<int> decrypt(vector<int>& c, int k) {
        vector<int>a(c.size(),0);
        if (k==0)
        return a;
        if(k>0){
        for(int i=0;i<c.size();i++){
            for(int j=0;j<k;j++){
                a[i]+=c[(i+j+1)%c.size()];
            }
        }
        return a;
        }
        k=-k;
        reverse(c.begin(),c.end());
        for(int i=0;i<c.size();i++){
            for(int j=0;j<k;j++){
                a[i]+=c[(i+j+1)%c.size()];
            }
        }
        reverse(a.begin(),a.end());
        return a;
    }
};