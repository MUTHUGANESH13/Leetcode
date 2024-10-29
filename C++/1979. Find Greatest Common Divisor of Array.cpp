class Solution {
public:
    int findGCD(vector<int>& n) {
        sort(n.begin(),n.end());
        return gcd(n[0],n.back());
    }
};