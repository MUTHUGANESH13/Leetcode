class Solution {
public:
    int firstMissingPositive(vector<int>& n) {
        set<int> a(n.begin(), n.end());
        int i = 1;
        while (true) {
            if (a.find(i) == a.end()) return i;
            i++;
        }
        return *max_element(n.begin(),n.end())+1;
    }
};
