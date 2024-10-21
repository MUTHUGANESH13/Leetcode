class Solution {
    public List<Integer> targetIndices(int[] n, int t) {
        int l=0,h=n.length-1,m,a=-1,b=-1;
        Arrays.sort(n);
        while(l<=h){
            m=(l+h)/2;
            if(n[m]==t){
                a=m;
                h=m-1;
            }
            else if(n[m]>t)
            h=m-1;
            else
            l=m+1;
        }
        l=0;
        h=n.length-1;
        while(l<=h){
            m=(l+h)/2;
            if(n[m]==t){
                b=m;
                l=m+1;
            }
            else if(n[m]>t)
            h=m-1;
            else
            l=m+1;
        }
        List<Integer> k=new ArrayList<>();
        if(a==b){
        if(a!=-1)
        k.add(a);
        return k;
        }
        for(int i=a;i<=b;i++){
            k.add(i);
        }
        return k;
    }
}