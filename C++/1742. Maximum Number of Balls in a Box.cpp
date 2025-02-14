class Solution {
public:
    int countBalls(int l, int h) {
        map<int,int>m;
        int a=0;
        for(int i=l;i<=h;i++){
            int s=0,x=i;
            while(x!=0){
                s+=x%10;
                x/=10;
            }
            m[s]++;
            a=max(m[s],a);
        }
        return a;
    }
};