class Solution {
public:
    int minOperations(vector<int>& n) {
        map<int,int>m;
        for(int i:n)
        m[i]++;
        int c=0;
        for(auto i=m.begin();i!=m.end();i++){
            int a=i->second;
            while(a!=0){
                if(a==1)
                return -1;
                else if(a==4){
                    c+=2;
                    a-=4;
                }
                else if(a==2){
                    c++;
                    a-=2;
                }
                else{
                    c++;
                    a-=3;
                }
            }
        }
        return c;
    }
};