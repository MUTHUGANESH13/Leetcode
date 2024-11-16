class Solution {
public:
    int passThePillow(int n, int t) {
        int x=t/--n;
        t=t%n;
        if(x%2==0)
        return t+1;
        return n-t+1;
    }
};