class Solution {
    public int minStoneSum(int[] p, int k) {
        PriorityQueue<Integer>x=new PriorityQueue<>(Collections.reverseOrder());
        for(int i:p){
            x.add(i);
        }
        for(int i=0;i<k;i++){
            int a=x.poll();
            a-=(int)Math.floor(a/2);
            x.add(a);
        }
        int s=0;
        while(x.size()!=0){
            s+=x.poll();
        }
        return s;
    }
}