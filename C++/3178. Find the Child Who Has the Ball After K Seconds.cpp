class Solution {
public:
    int numberOfChild(int n, int k) {
        int x=k/--n;
        k=k%n;
        if(x%2==0)
        return k;
        return n-k;
    }
};