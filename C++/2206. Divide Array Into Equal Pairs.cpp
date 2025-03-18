class Solution {
public:
    bool divideArray(vector<int>& n) {
        //sort(n.begin(),n.end());
        int i,fla=0;
        unordered_map<int,int>f;
        for(i=0;i<n.size();i++)
        {
            f[n[i]]++;
        }
        for(i=0;i<f.size();i++)
        {
            if(f[i]%2!=0)
            fla=1;
        }
        return(fla==0);
    }
};