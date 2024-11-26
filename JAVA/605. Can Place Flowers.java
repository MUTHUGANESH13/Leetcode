class Solution {
    public boolean canPlaceFlowers(int[] f, int n) {
        if(f.length==1){
            if(f[0]==0)
            return 1>=n;
            return 0>=n;
        }
        int c=0;
        if(f[0]==0&&f[1]==0){
        f[0]=1;
        c++;
        }
        for(int i=1;i<f.length-1;i++){
            if(f[i-1]==0&&f[i]==0&&f[i+1]==0){
            f[i]=1;
            c++;
            if(c>=n)
            return true;
            }
        }
        if(f.length-1==0&&f[f.length-2]==0)
        c++;
        return c>=n;
    }
}