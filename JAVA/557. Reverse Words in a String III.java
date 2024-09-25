import java.util.*;

class Solution {
    public String reverseWords(String s) {
        List<String> a = new ArrayList<>();
        String b = "";
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == ' ') {
                a.add(b);  
                b = "";    
            } else {
                b += s.charAt(i); 
            }
        }
        a.add(b); 
        b = ""; 
        for (int i = 0; i < a.size() - 1; i++) {
            b += new StringBuilder(a.get(i)).reverse().toString(); 
            b += " "; 
        }
        b += new StringBuilder(a.get(a.size() - 1)).reverse().toString();
        return b;
    }
}
