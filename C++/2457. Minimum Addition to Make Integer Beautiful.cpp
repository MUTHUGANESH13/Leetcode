class Solution {
public:
int sum(long long n){
        int s=0;
        while(n!=0){
            s+=n%10;
            n/=10;
        }
        return s;
}
    long long makeIntegerBeautiful(long long n, int t) {
        long long k=10,r=0;
        if(sum(n)<=t)
        return 0;
        while(true){
           r+=k-(n%k);
           n+=k-(n%k);
           k*=10;
           if(sum(n)<=t)
           return r;
        }
        return 0;
    }    
};