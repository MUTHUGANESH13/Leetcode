class Solution {
public:
    int countStudents(vector<int>& s, vector<int>& d) {
        int l=0;
        while(true){
            if(s.size()==0)
            return 0;
            if(s[0]==d[0]){
                s.erase(s.begin());
                d.erase(d.begin());
                l=0;
            }
            else{
                s.push_back(s[0]);
                s.erase(s.begin());
                l++;
            }
            if(l==s.size())
            break;
        }
        return s.size();
    }
};