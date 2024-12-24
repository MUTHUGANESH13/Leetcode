class Solution {
    public boolean canAliceWin(int[] n) {
        int s=0,r=0;
        for(int i=0;i<n.length;i++){
            if(n[i]<10)
            s+=n[i];
            else
            r+=n[i];
        }
        return r!=s;
    }
}