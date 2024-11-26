class Solution {
    public int numMatchingSubseq(String s, String[] w) {
        int i,c=0;
        HashMap<String, Boolean> a = new HashMap<>();
        for(i=0;i<w.length;i++){
            if(a.containsKey(w[i])) {
                if(a.get(w[i])) c++;
            } else {
                boolean result = is(s, w[i]);
                a.put(w[i], result);
                if(result) c++;
            }
        }
        return c;
    }
    private boolean is(String s,String t){
        int i,f=0;
        for(i=0;i<s.length() && f<t.length();i++){
            if(s.charAt(i)==t.charAt(f))
            f++;
        }
        return f==t.length();
    }
}