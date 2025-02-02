class Solution {
    public int thirdMax(int[] n) {
        int m=1;
        Arrays.sort(n);
        for(int i=n.length-2;i>=0;i--){
            if(n[i+1]!=n[i])
            m++;
            if(m==3)
            return n[i];
        }
        return n[n.length-1];
    }
}