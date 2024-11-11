class Solution {
public:
    int countDistinctIntegers(vector<int>& n) {
        int l=n.size(),i,r,x,y,k=1;
        for(i=0;i<l;i++)
        {
            r=0;
            x=n[i];
            while(x!=0)
            {
                y=x%10;
                r=(r*10)+y;
                x/=10;
            }
            if(n[i]!=r)
            n.push_back(r);
        }
        sort(n.begin(),n.end());
        for(i=0;i<n.size()-1;i++)
        {
            if(n[i]!=n[i+1])
            k++;
        }
        return(k);
    }
};