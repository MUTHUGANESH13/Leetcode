class Solution {
    public int arrayPairSum(int[] n) {
        int i,s=0;
        Arrays.sort(n);
        for(i=0;i<n.length;i+=2){
            s+=n[i];
        }
        return s;
    }
}