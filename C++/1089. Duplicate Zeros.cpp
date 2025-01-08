class Solution {
public:
    void duplicateZeros(vector<int>& a) {
        for(int i=0;i<a.size();i++){
            if(a[i]==0){
                int j=a.size()-1;
                while(j>i+1){
                    a[j]=a[j-1];
                    j--;
                }
                if(i+1<a.size())
                a[++i]=0;
            }
    }
    }
};