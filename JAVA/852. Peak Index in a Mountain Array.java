class Solution {
    public int peakIndexInMountainArray(int[] a) {
        for(int i=1;i<a.length-1;i++){
            if(a[i]>a[i+1]&&a[i]>a[i-1])
            return i;
        }
        return -1;
    }
}