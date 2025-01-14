class Solution {
    public int minOperations(int[] n, int k) {
        PriorityQueue<Long>p=new PriorityQueue<>();
        for(int i:n){
            p.add((long)i);
        }
        int c=0;
        while(p.size()>1){
            long x=p.poll();
            if(x>=k)
            return c;
            long y=p.poll();
            p.add(Math.min(x,y)*2+Math.max(x,y));
            c++;
        }
        return c;
    }
}