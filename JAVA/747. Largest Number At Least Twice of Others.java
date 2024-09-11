class Solution {
    public int dominantIndex(int[] n) {
        int i,k=-1,m=-1;
        for(i=0;i<n.length;i++){
            if(m<n[i]){
                m=n[i];
                k=i;
            }
        }
        Arrays.sort(n);
        if(n[n.length-1]>=2*n[n.length-2])
        return k;
        return -1;
    }
}