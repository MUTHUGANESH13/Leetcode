class Solution {
public:
    int minimumRounds(vector<int>& t) {
        map<int,int>m;
        int c=0;
        for(int i:t)
        m[i]++;
        for(auto i=m.begin();i!=m.end();i++){
            while(i->second!=0){
                if(i->second==1)
                return -1;
                else if(i->second==4){
                c+=2;
                i->second-=4;
                }
                else if(i->second==2){
                c++;
                i->second-=2;
                }
                else{
                    c++;
                    i->second-=3;
                }
            }
        }
        return c;
    }
};