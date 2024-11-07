class Solution {
public
    bool divideArray(vectorint& n) {
        sort(n.begin(),n.end());
        int i,fla=0;
        unordered_mapint,intf;
        for(i=0;in.size();i++)
        {
            f[n[i]]++;
        }
        for(i=0;if.size();i++)
        {
            if(f[i]%2!=0)
            fla=1;
        }
        return(fla==0);
    }
};