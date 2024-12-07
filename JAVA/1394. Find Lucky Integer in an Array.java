class Solution {
    public int findLucky(int[] arr) {
        Map<Integer,Integer>m=new HashMap<>();
        for(int i:arr){
            m.put(i, m.getOrDefault(i, 0) + 1);
        }
        int v=-1;
        for (Map.Entry<Integer,Integer> e : m.entrySet()){
            if(e.getValue()==e.getKey()){
                if(v<e.getValue())
                v=e.getKey();
            }
        }
        return v;
    }
}