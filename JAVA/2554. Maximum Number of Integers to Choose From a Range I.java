class Solution {
    public int maxCount(int[] b, int n, int m) {
        int s=0,c=0;
        for(int i=1;i<=n;i++){
            boolean t=false;
            for(int j:b){
                if(j==i){
                    t=true;
                    break;
                }
            }
            if(!t){
                if(s+i>m)
                break;
                    s+=i;
                    c++;                
            }
        }
        return c;
    }
}