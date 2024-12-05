class Solution {
    public List<Integer> findLonely(int[] n) {
        List<Integer>a=new ArrayList<>();
        Arrays.sort(n);
        for(int i=0;i<n.length;i++){
            if((i==0||n[i]-n[i-1]>1)&&(i==n.length-1||n[i+1]-n[i]>1))
            a.add(n[i]);
        }
        return a;
    }
}