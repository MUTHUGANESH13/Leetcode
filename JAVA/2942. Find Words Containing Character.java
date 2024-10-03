class Solution {
    public List<Integer> findWordsContaining(String[] w, char x) {
        List<Integer> a=new ArrayList<>();
        for(int i=0;i<w.length;i++){
            for(int j=0;j<w[i].length();j++){
                if(w[i].charAt(j)==x){
                    a.add(i);
                    break;
                }
            }
        }
        return a;
    }
}