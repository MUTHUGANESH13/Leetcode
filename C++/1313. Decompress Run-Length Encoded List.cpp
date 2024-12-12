class Solution {
public:
    vector<int> decompressRLElist(vector<int>& n) {
        vector<int>a;
        for(int i=0;i<n.size();i+=2){
            for(int j=0;j<n[i];j++){
                a.push_back(n[i+1]);
            }
        }
        return a;
    }
};