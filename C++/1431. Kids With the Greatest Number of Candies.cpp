class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int e) {
        vector<bool>a;
        int m=*max_element(c.begin(),c.end());
        for(int i:c){
            a.push_back((i+e)>=m);
        }
        return a;
    }
};