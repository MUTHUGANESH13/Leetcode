class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& n, vector<vector<int>>& q) {
        int s=0;
        vector<int>a;
        for(int i:n){
            if(i%2==0)
            s+=i;
        }
        for(int i=0;i<q.size();i++){
            if(n[q[i][1]]%2==0)
            s-=n[q[i][1]];
            n[q[i][1]]+=q[i][0];
            if(n[q[i][1]]%2==0)
            s+=n[q[i][1]];
            a.push_back(s);
        }
        return a;
    }
};