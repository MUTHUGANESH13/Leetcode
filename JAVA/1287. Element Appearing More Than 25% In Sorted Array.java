class Solution {
    public int findSpecialInteger(int[] a) {
        HashMap<Integer,Integer>x=new HashMap<>();
        for(int i:a){
            x.put(i,x.getOrDefault(i,0)+1);
            if(x.get(i)>a.length/4)
            return i;
        }
        return -1;

    }
}