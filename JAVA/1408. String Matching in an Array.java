class Solution {
    public List<String> stringMatching(String[] w) {
        Set<String> a=new HashSet<>();
        for(int i=0;i<w.length;i++){
            for(int j=i+1;j<w.length;j++){
                if(w[i].length()>w[j].length()){
                    if(w[i].contains(w[j]))
                    a.add(w[j]);
                }
                else{
                    if(w[j].contains(w[i]))
                    a.add(w[i]);
                }
        }
        }
        return new ArrayList<>(a);
}
}