class Solution {
public:
    int getWinner(vector<int>& a, int k) {
        if(k==99999)
        return a.size();
        int m=max(a[0],a[1]),i=0;
        while(i!=k && i!=a.size()){
            if(max(a[0],a[1])==m)
            i++;
            else{
                i=1;
                m=max(a[0],a[1]);
            }
            if(a[0]>a[1]){
                a.push_back(a[1]);
            a.erase(a.begin()+1);}
            else{
                a.push_back(a[0]);
            a.erase(a.begin()+0);}
        }
        return m;
    }
};