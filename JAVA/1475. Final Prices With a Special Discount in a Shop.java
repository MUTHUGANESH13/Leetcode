class Solution {
    public int[] finalPrices(int[] p) {
        int[] a=p.clone();
        Stack<Integer>b=new Stack<>();
        for(int i=0;i<p.length;i++){
            while(b.size()!=0 && p[b.peek()]>=p[i])
            a[b.pop()]-=p[i];
        b.add(i);
        }
    return a;
    }
}