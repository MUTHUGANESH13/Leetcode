class Solution {
    public int sumCounts(List<Integer> n) {
        int c=0;
        for(int i=0;i<n.size();i++){
            Set<Integer>s=new HashSet<>();
            for(int j=i;j<n.size();j++){
                s.add(n.get(j));
                c+=s.size()*s.size();
            }
        }
        return c;
    }
}