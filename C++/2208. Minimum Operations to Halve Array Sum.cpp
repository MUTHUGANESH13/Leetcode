class Solution {
public:
    int halveArray(vector<int>& n) {
        priority_queue<float>p(n.begin(),n.end());
        double s=accumulate(n.begin(),n.end(),0.0);
        double h=s/2.0;
        int c=0;
        while(h<s){
            s-=p.top()/2.0;
            p.push(p.top()/2.0);
            c++;
            if(h>s)
            return c;
            p.pop();
        }
        return c;
    }
};