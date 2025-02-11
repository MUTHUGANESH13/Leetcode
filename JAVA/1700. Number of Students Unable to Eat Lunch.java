class Solution {
    public int countStudents(int[] s, int[] d) {
        ArrayList<Integer>a=new ArrayList<>();
        ArrayList<Integer>b=new ArrayList<>();
        for(int i:s){
            a.add(i);
        }
        for(int i:d)
        b.add(i);
        int l=0;
        while(true){
            if(a.size()==0)
            return 0;
            if(a.get(0)==b.get(0)){
                a.remove(0);
                b.remove(0);
                l=0;
            }
            else{
                a.add(a.get(0));
                a.remove(0);
                l++;
            }
            if(l==a.size())
            break;
        }
        return a.size();
    }
}