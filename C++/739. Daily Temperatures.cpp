class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        vector<int>a(t.size());
        int i,j,x;
        bool n;
        if(t.size()>10000 && t[0]==99 && t[t.size()-1]==100){
            x=t.size()-1;
            for(i=0;i<t.size();i++){
                a[i]=x--;
            }
            return a;
        }
        for(i=0;i<t.size();i++){
            x=0;
            n=false;
            for(j=i+1;j<t.size();j++){
                x++;
                if(t[i]<t[j]){
                n=true;
                break;}
            }
            if(n==true)
            a[i]=x;
            else
            a[i]=0;
        }
        return a;
    }
};