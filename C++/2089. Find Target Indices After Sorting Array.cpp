class Solution {
public:
    vector<int> targetIndices(vector<int>& n, int t) {
        sort(n.begin(),n.end());
        int l=0,h=n.size()-1,m,a=-1,b=-1;
        while(l<=h){
            m=(l+h)/2;
            if(n[m]==t){
                a=m;
                h=m-1;
            }
            else if(n[m]>t)
            h=m-1;
            else
            l=m+1;
        }
        l=0;
        h=n.size()-1;
        while(l<=h){
            m=(l+h)/2;
            if(n[m]==t){
                b=m;
                l=m+1;
            }
            else if(n[m]>t)
            h=m-1;
            else
            l=m+1;
        }
        if(a==b){
        if(a==-1)
        return{};
        return{a};}
        vector<int>k;
        for(int i=a;i<=b;i++){
            k.push_back(i);
        }
        return k;
    }
};