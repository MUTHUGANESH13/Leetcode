class Solution {
    public int findFinalValue(int[] n, int o) {
        int i;
        Arrays.sort(n);
        for(i=0;i<n.length;i++){
            if(n[i]==o)
            o*=2;
        }
        return o;
    }
}