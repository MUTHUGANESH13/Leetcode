class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& n) {
        int i=0,j=1,k;
        while(i<n.size() && j<n.size()){
            if(n[i]%2==0)
            i+=2;
            else if(n[j]%2==1)
            j+=2;
            else{
                swap(n[i],n[j]);
                i+=2;
                j+=2;
            }
        }
        return n;
    }
};