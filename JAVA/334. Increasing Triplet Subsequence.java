class Solution {
    public boolean increasingTriplet(int[] n) {
        int t=Integer.MIN_VALUE,s=Integer.MIN_VALUE,c=Integer.MIN_VALUE;
        for(int i=n.length-1;i>=0;i--){
            if(t<n[i])
            t=n[i];
            else if(t>n[i] && s<n[i])
            s=n[i];
            else if(t>n[i] && s>n[i] && t>s)
            return true;
        }
        return false;
    }
}