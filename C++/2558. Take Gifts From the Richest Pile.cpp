class Solution {
public:
    long long pickGifts(vector<int>& g, int k) {
        priority_queue<int>a(g.begin(),g.end());
        for(int i=0;i<k;i++){
            int x=a.top();
            a.pop();
            a.push(sqrt(x));
        }
        long long s=0;
        while(!a.empty()){
            s+=a.top();
            a.pop();
        }
        return s;
    }
};