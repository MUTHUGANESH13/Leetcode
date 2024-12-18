class Solution {
    public long countFairPairs(int[] n, int l, int u) {
        Arrays.sort(n);
        return pov(n,u+1)-pov(n,l);
    }
    private long pov(int[] n,int v){
        int l=0,r=n.length-1;
        long a=0;
        while(l<r){
            int s=n[l]+n[r];
            if(s<v)
                a+=r-l++;
            else
            r--;
        }
        return a;
    }
}