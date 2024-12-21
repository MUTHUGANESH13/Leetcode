class Solution {
public:
    long long waysToBuyPensPencils(int t, int p, int c) {
        long long a;
        for(int i=0;i<=t;i+=p){
            int l=t-i;
            a+=(l/c)+1;
        }
        return a;
    }
};