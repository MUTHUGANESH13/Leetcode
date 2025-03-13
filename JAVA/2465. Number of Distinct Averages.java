class Solution {
    public int distinctAverages(int[] n) {
        HashSet<Integer>s=new HashSet<>();
        Arrays.sort(n);
        for(int i=0;i<n.length/2;i++){
            s.add(n[i]+n[n.length-1-i]);
        }
        return s.size();
    }
}