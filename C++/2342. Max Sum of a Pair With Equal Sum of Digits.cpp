class Solution {
public:
    int d(int n){
        int s=0;
        while(n!=0){
            s+=n%10;
            n/=10;
        }
        return s;
    }
    int maximumSum(vector<int>& n) {
        vector<pair<int,int>>a;
        for(int i:n){
            a.push_back({d(i),i});
        }
        sort(a.begin(),a.end());
        int m=-1;
        for(int i=0;i<a.size()-1;i++){
            if(a[i].first==a[i+1].first){
                m=max(m,a[i].second+a[i+1].second);
            }
        }
        return m;
    }
};