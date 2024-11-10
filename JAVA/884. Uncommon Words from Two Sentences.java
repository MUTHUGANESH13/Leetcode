class Solution {
    public String[] uncommonFromSentences(String s1, String s2) {
        List<String> d=new ArrayList<>();
        List<String> f=new ArrayList<>();
        int i;
        Map<String,Integer>a=new HashMap<>();
        String s="";
        for(i=0;i<s1.length();i++){
            if(s1.charAt(i)==' '){
                d.add(s);
                s="";
            }
            else
            s+=s1.charAt(i);
        }
        if (!s.equals(" ")) 
        d.add(s);
        s="";
        for(i=0;i<s2.length();i++){
            if(s2.charAt(i)==' '){
                d.add(s);
                s="";
            }
            else
            s+=s2.charAt(i);
        }
        if (!s.equals(" "))
        d.add(s);
        for(i=0;i<d.size();i++){
            a.put(d.get(i), a.getOrDefault(d.get(i), 0) + 1);
        }
        for (Map.Entry<String, Integer> e : a.entrySet()) {
           if(e.getValue()==1)
           f.add(e.getKey());
        }
        String[] o=f.toArray(new String[0]);
        return o;
    }
}