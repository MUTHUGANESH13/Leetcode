class Solution {
    public int minMaxGame(int[] n) {
        if(n.length<2)
        return n[0];
        int[] a=new int[n.length/2];
        for(int i=0;i<n.length/2;i++){
            if(i%2==0)
            a[i]=Math.min(n[2*i],n[2*i+1]);
            else
            a[i]=Math.max(n[2*i],n[2*i+1]);
        }
        return minMaxGame(a);
    }
}