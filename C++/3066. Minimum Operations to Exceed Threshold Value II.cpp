class Solution {
public:
    int minOperations(vector<int>& n, int k) {
        priority_queue<long,vector<long>,greater<long>>p(n.begin(),n.end());
        int c=0;
        while(p.size()>1){
            if(p.top()>=k)
            return c;
            long x=p.top();
            p.pop();
            long y=p.top();
            p.pop();
            p.push(x*2+y);
            c++;
        }
        return c;
    }
};   