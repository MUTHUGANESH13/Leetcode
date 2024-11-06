class Solution {
public:
    long long smallestNumber(long long n) {
        vector<int>a;
        if(n==0)
        return 0;
        int z=0;
        long long b=0;
        bool t=true;
        if(n<0){
            n=-n;
        t=false;}
        while(n!=0){
            if(n%10==0)
            z++;
            else
            a.push_back(n%10);
            n/=10;
        }
        if(t){
            sort(a.rbegin(),a.rend());
            b=a.back();
            a.pop_back();
            while(z!=0){
                b*=10;
                z--;
            }
            while(a.size()!=0){
                b=b*10+a.back();
                a.pop_back();
            }
            return b;
        }
        sort(a.begin(),a.end());
        while(a.size()!=0){
            b=b*10+a.back();
            a.pop_back();
        }
        while(z!=0){
            b*=10;
            z--;
        }
        return -b;
    }
};