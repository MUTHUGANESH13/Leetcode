class Solution {
    public int[] getFinalState(int[] n, int k, int m) {
        for(int i=0;i<k;i++){
            int min=n[0],x=0;
            for(int j=0;j<n.length;j++){
                if(min>n[j]){
                    min=n[j];
                    x=j;
                }
            }
            n[x]*=m;
        }
        return n;
    }
}