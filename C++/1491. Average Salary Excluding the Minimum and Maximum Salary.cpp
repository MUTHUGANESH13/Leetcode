class Solution {
public:
    double average(vector<int>& s) {
        double a=0.0;
        for(int i:s){
            a+=i;
        }
        a=a-*min_element(s.begin(), s.end())-*max_element(s.begin(), s.end());
        return(a/(s.size()-2));
    }
};