class Solution {
    public int fillCups(int[] a) {
        Arrays.sort(a);
        int c=0;
        while(a[1]!=0 && a[2]!=0){
            c++;
            a[1]--;
            a[2]--;
            Arrays.sort(a);
        }
        return c+a[2];
    }
}