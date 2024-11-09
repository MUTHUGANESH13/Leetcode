class Solution {
    public boolean lemonadeChange(int[] b) {
        int i,t=0,f=0;
        for(i=0;i<b.length;i++){
            if(b[i]==5){
                f++;
            }
            else if(b[i]==10){
                if(f<=0)return false;
                f--;
                t++;
            }
            else if(b[i]==20){
                if(f>0 && t>0){
                    f--;
                    t--;
                }
                else if(f>=3)
                f-=3;
                else
                return false;
            }
        }
        return true;
    }
}