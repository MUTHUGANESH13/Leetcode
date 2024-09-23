class Solution {
    public boolean threeConsecutiveOdds(int[] a) {
        for(int i=1;i<a.length-1;i++)
        {
            if((a[i-1]%2==1 && a[i]%2==1 && a[i+1]%2==1))
            {
                return true;
            }
        }
        return false;
    }
}