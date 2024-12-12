class Solution {
    public int[] decompressRLElist(int[] n) {
        List<Integer>a=new ArrayList<>();
        for(int i=0;i<n.length;i+=2){
            for(int j=0;j<n[i];j++){
                a.add(n[i+1]);
            }
        }
        int[] x=new int[a.size()];
        for(int i=0;i<a.size();i++){
            x[i]=a.get(i);
        }
        return x;
    }
}
