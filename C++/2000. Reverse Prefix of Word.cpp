class Solution {
public:
    string reversePrefix(string w, char c) {
        for(int i=0;i<w.size();i++){
            if(w[i]==c){
            reverse(w.begin(),w.begin()+i+1);
            return w;
            }
        }
        return w;
    }
};