class Solution {
    public int countCompleteDayPairs(int[] h) {
        int c=0,i,j;
        for(i=0;i<h.length;i++){
            for(j=i+1;j<h.length;j++){
                if((h[i]+h[j])%24==0){
                    c++;
                }            
        }
    }
    return c;
    }
}