class Solution {
    public boolean containsNearbyDuplicate(int[] n, int k) {
        for(int i=0;i<n.length;i++)
        {
            for(int j=i+1;j<n.length && j<i+1+k;j++)
            {
                if(n[i]==n[j])
                return true;
            }
        }
        return false;
    }
}