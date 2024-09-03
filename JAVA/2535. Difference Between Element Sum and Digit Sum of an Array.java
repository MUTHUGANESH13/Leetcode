class Solution {
    public int differenceOfSum(int[] n) {
        int i,s=0,k=0,r;
        for(i=0;i<n.length;i++){
            s+=n[i];
            if(n[i]>9){
                r=0;
                while(n[i]!=0){
                    r+=n[i]%10;
                    n[i]/=10;
                }
                k+=r;
            }
            else
            k+=n[i];
        }
        return(Math.abs(s-k));
    }
}