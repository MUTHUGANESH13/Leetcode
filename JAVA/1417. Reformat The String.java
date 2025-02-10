class Solution {     
    public String reformat(String s) {         
        StringBuilder a = new StringBuilder(), b = new StringBuilder(), c = new StringBuilder();         
        for (int i = 0; i < s.length(); i++) {             
            if (s.charAt(i) <= '9' && s.charAt(i) >= '0')                 
                a.append(s.charAt(i));             
            else                 
                b.append(s.charAt(i));         
        }         
        if (Math.abs(a.length() - b.length()) > 1)             
            return "";         
        if (a.length() == b.length()) {             
            for (int i = 0; i < a.length(); i++) {                 
                c.append(b.charAt(i));                 
                c.append(a.charAt(i));             
            }         
        } else if (a.length() > b.length()) {             
            for (int i = 0; i < b.length(); i++) {                 
                c.append(a.charAt(i));                 
                c.append(b.charAt(i));             
            }             
            c.append(a.charAt(a.length() - 1));         
        } else {             
            for (int i = 0; i < a.length(); i++) {                 
                c.append(b.charAt(i));                 
                c.append(a.charAt(i));             
            }             
            c.append(b.charAt(b.length() - 1));         
        }         
        return c.toString();     
    } 
}