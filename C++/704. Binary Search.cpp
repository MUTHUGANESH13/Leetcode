class Solution {
public:
    int search(vector<int>& n, int t) {
        int l=0,h=n.size()-1,m;{
            while(l<=h){
                m=(l+h)/2;
                if(n[m]==t)
                return m;
                else if(t>n[m])
                l=++m;
                else
                h=--m;
            }
            return -1;
        }
    }
};