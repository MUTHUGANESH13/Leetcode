class Solution {
public:
    vector<int> productExceptSelf(vector<int>& n) {
        int z=0,t;
        long long int s=1;
        for(int i=0;i<n.size();i++){
            if(n[i]==0){
            z++;
            t=i;}
            else
            s*=n[i];
        }
        if(z>1){
            vector<int>a(n.size(),0);
            return a;
        }
        else if(z==1){
            vector<int>a(n.size(),0);
            a[t]=s;
            return a;
        }
        for(int i=0;i<n.size();i++){
            if(n[i]==0)
            n[i]=s;
            else
            n[i]=(s/n[i]);
        }
        return n;
    }
};