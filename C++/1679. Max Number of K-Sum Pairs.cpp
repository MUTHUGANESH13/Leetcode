class Solution {
public:
    int maxOperations(vector<int>& n, int k) {
        int i=0,j=n.size()-1,c=0;
        sort(n.begin(),n.end());
        while(i<j){
            if(n[i]+n[j]==k){
                c++;
                i++;
                j--;
            }
            else if((n[i]+n[j])<k)
            i++;
            else
            j--;
        }
        return c;
    }
};