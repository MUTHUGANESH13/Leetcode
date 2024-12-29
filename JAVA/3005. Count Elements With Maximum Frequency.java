class Solution {
    public int maxFrequencyElements(int[] n) {
        Map<Integer,Integer>m=new HashMap<>();
        for(int i:n)
        m.put(i,m.getOrDefault(i,0)+1);
        int max=0,c=0;
        for(int i:m.values()){
            if(i>max)
            max=i;
        }
        for(int i:m.values()){
            if(i==max)
            c++;
        }
        return max*c;
    }
}