class Solution {
public:
    int numFriendRequests(vector<int>& a) {
        map<int,int>m;
        int c=0;
        for(int i:a)
        m[i]++;
        for(auto i=m.begin();i!=m.end();i++){
            for(auto j=m.begin();j!=m.end();j++){
                if((i->first*0.5+7)>=j->first || i->first<j->first ||(i->first<100 && 100<j->first))
                continue;
                c+=i->second*j->second;
                if(i->first==j->first)
                c-=i->second;
            }
        }
        return c;
    }
};