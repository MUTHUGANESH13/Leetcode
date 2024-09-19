class Solution {
public:
    bool lemonadeChange(vector<int>& b) {
        int i,f=0,t=0;
        for(i=0;i<b.size();i++){
            if(b[i]==5)
            f++;
            else if(b[i]==10){
                if(f<=0)
                return false;
                else{
                    f--;
                    t++;
                }
            }
            else if(b[i]==20){
                if(t<=0 && f<=0)
                return false;
                else if(t>0 && f>0){
                    t--;
                    f--;
                }
                else if(t<=0 && f>=3){
                    f=f-3;
                }
                else
                return false;
            }
        }
        return true;
    }
};