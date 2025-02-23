class Solution {
public:
    int countQuadruplets(vector<int>& n) {
        int s=0;
        for(int i=0;i<n.size();i++){
            for(int j=i+1;j<n.size();j++){
                for(int k=j+1;k<n.size();k++){
                    for(int l=k+1;l<n.size();l++){
                        if(n[i]+n[j]+n[k]==n[l])
                        s++;
                    }
                }
            }
        }
        return s;
    }
};