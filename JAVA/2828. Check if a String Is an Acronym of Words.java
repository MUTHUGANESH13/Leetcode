class Solution {
    public boolean isAcronym(List<String> w, String s) {
        if(w.size()!=s.length())
        return false;
        for(int i=0;i<w.size();i++){
            if(w.get(i).charAt(0)!=s.charAt(i))
            return false;
        }
        return true;
    }
}