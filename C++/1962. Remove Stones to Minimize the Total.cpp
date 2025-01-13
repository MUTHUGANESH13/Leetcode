class Solution {
public:
    int minStoneSum(vector<int>& p, int k) {
        priority_queue<int>x(p.begin(),p.end());
        for(int i=0;i<k;i++){
           int a=x.top();
           x.pop();
           a-=a/2;
           x.push(a);
        }
        int s=0;
        while(!x.empty()){
            s+=x.top();
            x.pop();
        }
        return s;
    }
};