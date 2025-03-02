class Solution {
    public int waysToSplitArray(int[] n) {
        long s=0,k=0;
        for(int i:n)
        s+=i;
        int c=0;
        for(int i=n.length-1;i>0;i--){
            s-=n[i];
            k+=n[i];
            if(s>=k)
            c++;
        }
        return c;
    }
}