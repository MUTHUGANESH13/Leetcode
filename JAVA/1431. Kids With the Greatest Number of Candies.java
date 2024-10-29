class Solution {
    public List<Boolean> kidsWithCandies(int[] c, int e) {
        List<Boolean> a=new ArrayList<>();
        int i,m=0;
        for(i=0;i<c.length;i++){
            if(m<c[i]){
                m=c[i];
            }
        }
        for(i=0;i<c.length;i++){
            a.add((c[i]+e)>=m);
        }
        return a;
    }
}