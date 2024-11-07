class Solution {
    public List<List<Integer>> minimumAbsDifference(int[] a) {
        int i,m=99999;
        List<List<Integer>>d=new ArrayList<>();
        Arrays.sort(a);
        for(i=0;i<a.length-1;i++){
            if(-(a[i]-a[i+1])<m)
            m=-(a[i]-a[i+1]);
        }
        for(i=0;i<a.length-1;i++){
            if(-(a[i]-a[i+1])==m)
            d.add(Arrays.asList(a[i], a[i+1]));
        }
        return d;
    }
}