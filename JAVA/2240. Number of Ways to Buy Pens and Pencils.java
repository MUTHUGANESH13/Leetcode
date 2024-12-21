class Solution {
    public long waysToBuyPensPencils(int t, int p, int c) {
        long a=0;
        if(p>c){
            for(int i=0;i<=t;i+=p){
                int l=t-i;
                a+=(l/c)+1;
            }
        }
        else{
            for(int i=0;i<=t;i+=c){
                int l=t-i;
                a+=(l/p)+1;
            }
        }
        return a;
    }
}