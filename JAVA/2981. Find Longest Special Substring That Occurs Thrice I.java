class Solution {
    public int maximumLength(String s) {
        HashMap<String,Integer>m=new HashMap<>();
        for(int i=0;i<s.length();i++){
            String k="";
            k+=s.charAt(i);
            m.put(k.toString(), m.getOrDefault(k.toString(), 0) + 1);
            for(int j=i+1;j<s.length();j++){
                if(k.charAt(k.length()-1)==s.charAt(j)){
                    k+=s.charAt(j);
                    m.put(k.toString(), m.getOrDefault(k.toString(), 0) + 1);
                }
                else
                break;
            }
        }
        int a=0;
        for(String i:m.keySet()){
            if(m.get(i)>=3&&i.length()>a)
            a=i.length();
        }
        if(a==0)
        return -1;
        return a;
    }
}