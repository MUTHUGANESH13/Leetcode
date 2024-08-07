class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        d[d.size()-1]++;
        for(int i=d.size()-1;i>=0;i--)
        {
            if(d[i]==10 && i!=0){
                d[i-1]++;
                d[i]=0;
            continue;}
            else
            break;
        }
        if(d[0]==10)
        {
            d[0]=0;
            d.insert(d.begin(),1);
        }
        return d;
    }
};