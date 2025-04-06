class Solution {
    public boolean isArraySpecial(int[] n) {
        for(int i=0;i<n.length-1;i++){
            if(n[i]%2==n[i+1]%2)
            return false;
        }
        return true;
    }
}