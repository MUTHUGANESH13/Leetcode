class Solution {
    public int numberOfEmployeesWhoMetTarget(int[] h, int t) {
        int c=0;
        for(int i:h){
            if(i>=t)
            c++;
        }
        return c;
    }
}