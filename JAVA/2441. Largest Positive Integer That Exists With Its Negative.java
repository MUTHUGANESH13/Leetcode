class Solution {
    public int findMaxK(int[] n) {
        Arrays.sort(n);
        int i=0,j=n.length-1;
        while(i<j){
            if(-n[i]>n[j])
            i++;
            if(-n[i]<n[j])
            j--;
            if(-n[i]==n[j])
            return n[j];
        }
        return -1;
    }
}