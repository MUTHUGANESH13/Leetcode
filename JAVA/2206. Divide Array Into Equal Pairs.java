class Solution {
    public boolean divideArray(int[] n) {
        Map<Integer,Integer> m=new HashMap<>();
        for(int i:n){
            m.put(i,m.getOrDefault(i,0)+1);
        }
        for(Integer i:m.values()){
            if(i%2!=0)
            return false;
        }
        return true;
    }
}