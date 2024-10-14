class Solution {
    public int[] separateDigits(int[] n) {
        List<Integer> a=new ArrayList<>();
        int i;
        for(i=n.length-1;i>=0;i--){
            if(n[i]>9){
                while(n[i]!=0){
                    a.add(n[i]%10);
                    n[i]/=10;
                }
            }
            else
            a.add(n[i]);
        }
        int[] b = new int[a.size()];
        for (i = 0; i < a.size(); i++) {
            b[a.size()-1-i] = a.get(i);
        }
        return b;
    }
}