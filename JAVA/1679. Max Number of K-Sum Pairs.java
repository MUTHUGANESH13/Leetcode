class Solution {
    public int maxOperations(int[] n, int k) {
        int i=0,j=n.length-1,c=0;
        Arrays.sort(n);
        while(i<j){
            if((n[i]+n[j])==k){
                c++;
                i++;
                j--;
            }
            else if((n[i]+n[j])<k)
            i++;
            else
            j--;
        }
        return c;
    }
}