class Solution {
    public int firstMissingPositive(int[] n) {
        Arrays.sort(n);
        int i=1;
        for(int x:n){
            if(i==x)
            i++;
            else if(x>i)
            break;
        }
        return i;    
    }
}
