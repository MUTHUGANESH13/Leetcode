class Solution {
public:
    int getLucky(string s, int k) {
        int i,sum=0,r;
        for(i=0;i<s.size();i++){
            r=((int)s[i])-96;
            if(r>9)
            r=(r/10)+(r%10);
            sum+=r;
        }
        while(k>1){
            r=sum;
            sum=0;
            while(r!=0){
                sum+=r%10;
                r/=10;
            }
            --k;
        }
        return sum;
    }
};