class Solution {
public:
    vector<int> missingRolls(vector<int>& r, int m, int n) {
        vector<int>a;
        int i,s=0,k;
        s=accumulate(r.begin(),r.end(),0);
        k=(r.size()+n)*m-s;
        s=k/n;
        if((s>6||s<1))
        return a;
        if(s==6&&(k%n)>0)
        return a;
            for(i=0;i<n;i++){
                if(i<(k%n))
                a.push_back(s+1);
                else
                a.push_back(s);
            }
        return a;
    }
};