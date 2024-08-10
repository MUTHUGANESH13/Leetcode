class Solution {
public:
    int majorityElement(std::vector<int>& n) {
        unordered_map<int, int> x; 
        for(int i = 0; i < n.size(); i++) {
            x[n[i]]++;
        }
        for(const auto& a : x) {
            if(a.second > n.size() / 2) {
                return a.first;
            }
        }
        return -1;
    }
};