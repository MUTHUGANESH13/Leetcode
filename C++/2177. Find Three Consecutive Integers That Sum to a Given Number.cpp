class Solution {
public:
    vector<long long> sumOfThree(long long n) {
        vector<long long>a;
        if(n%3!=0)
        return a;
        a.push_back((n/3)-1);
        a.push_back((n/3));
        a.push_back((n/3)+1);
        return a;
    }
};