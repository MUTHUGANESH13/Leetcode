class Solution {
    public boolean canMakeArithmeticProgression(int[] a) {
        if(a.length==2)
        return true;
        Arrays.sort(a);
        int d=a[0]-a[1];
        for(int i=1;i<a.length-1;i++)
        {
            if(a[i]-a[i+1]!=d)
            return false;
        }
        return true;
    }
}