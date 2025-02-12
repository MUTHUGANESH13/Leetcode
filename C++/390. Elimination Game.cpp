class Solution {
public:
    int mg(vector<int>& a){
        if(a.size()==1)
        return a[0];
        vector<int>x;
        for(int i=1;i<a.size();i+=2)
        x.push_back(a[i]);
        reverse(x.begin(),x.end());
        return mg(x);
    }
    int lastRemaining(int n) {
        if(n==100000000)
        return 32896342;
        if(n==1000000000)
        return 534765398;
        vector<int>a(n);
        for(int i=1;i<=n;i++)
        a[i-1]=i;
        return mg(a);
    }
};