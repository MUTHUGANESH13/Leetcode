class Solution {
public:
    int triangleNumber(vector<int>& n) {
        int c=0;
        if(n.size()<3)
        return c;
        sort(n.begin(),n.end());
        for(int i=0;i<n.size()-2;i++){
            int k=i+2;
            for(int j=i+1;j<n.size()-1&& n[i]!=0;j++){
                while(k<n.size() && n[i]+n[j]>n[k])
                    k++;
                c+=k-j-1;
            }
        }
        return c;
    }
};