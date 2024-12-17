class Solution {
    public String oddString(String[] w) {
        Map<String,Integer> m = new HashMap<>();
        String[] a=new String[w.length];
        for(int i=0;i<w.length;i++){
            String k="";
            for(int j=0;j<w[i].length()-1;j++){
                k+=String.valueOf(w[i].charAt(j+1)-w[i].charAt(j));
            }
            m.put(k, m.getOrDefault(k, 0) + 1);
            a[i]=k;
        }
        for(int i=0;i<a.length;i++){
            if(m.get(a[i])==1)
            return w[i];
        }
        return w[w.length-1];
    }
}