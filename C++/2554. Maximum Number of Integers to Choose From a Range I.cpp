class Solution {
public:
    int maxCount(vector<int>& b, int n, int m) {
        int s=0,c=0;
        for(int i=1;i<=n;i++){
            if(find(b.begin(),b.end(),i)==b.end()){
                s+=i;
                c++;
                if(m<=s){
                    c--;
                    s-=i;
                }
            }
        }
        return c;
    }
};