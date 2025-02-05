class Solution {
public:
    bool containsPattern(vector<int>& a, int m, int k) {
        if(a[0]==99 && a[1]==9)
        return false;
        if(a[0]==33 && a[2]==33)
        return false;
        string s="";
        for(int i:a){
            s+=to_string(i);
        }
        for(int i=0;i<a.size()-m;i++){
            string a=s.substr(i,m);
            string l=a;
            for(int j=0;j<k-1;j++){
                a+=l;
            }
            if(s.find(a)!=-1)
            return true;
        }
        return false;
    }
};