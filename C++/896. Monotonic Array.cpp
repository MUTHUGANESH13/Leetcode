class Solution {
public:
    bool isMonotonic(vector<int>& n) {
        int i,f=0;
        if(n.size()<3)
        return true;
        for(i=0;i<n.size()-1;i++)
        {
            if(n[i]<=n[i+1])
            f=1;
            else{
                f=0;
            break;
            }
        }
        if(f==0){
        for(i=0;i<n.size()-1;i++)
        {
            if(n[i]>=n[i+1])
            f=1;
            else
            {
                f=0;
                break;
            }
        }}
        return (f==1);
    }
};