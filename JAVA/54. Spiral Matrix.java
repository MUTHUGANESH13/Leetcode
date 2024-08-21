class Solution {
    public List<Integer> spiralOrder(int[][] m) {
        List<Integer> q = new ArrayList<Integer>();
        int i,t=0,l=0,d=m.length-1,r=m[0].length-1;
        while(t<=d && l<=r){
            for(i=l;i<=r;i++){
                q.add(m[t][i]);
            }
            t++;
            for(i=t;i<=d;i++){
                q.add(m[i][r]);
            }
            r--;
            if(t<=d){
            for(i=r;i>=l;i--){
                q.add(m[d][i]);
            }
            d--;}
            if(l<=r){
            for(i=d;i>=t;i--){
                q.add(m[i][l]);
            }}
            l++;;
        }
        return q;
    }
}