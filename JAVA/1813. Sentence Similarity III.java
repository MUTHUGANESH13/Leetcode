import java.util.ArrayList;
import java.util.List;

class Solution {
    public boolean areSentencesSimilar(String s1, String s2) {
        List<String> a1 = sv(s1);
        List<String> a2 = sv(s2);
        int m1 = 0, m2 = 0;
        int n1 = a1.size() - 1, n2 = a2.size() - 1;
        while (m1 <= n1 && m2 <= n2) {
            if (a1.get(m1).equals(a2.get(m2))) {
                m1++;
                m2++;
            } else {
                break;
            }
        }
        while (n1 >= m1 && n2 >= m2) {
            if (a1.get(n1).equals(a2.get(n2))) {
                n1--;
                n2--;
            } else {
                break;
            }
        }
        return (m1 > n1 || m2 > n2);
    }

    private List<String> sv(String s) {
        List<String> a = new ArrayList<>();
        StringBuilder k = new StringBuilder();
        
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == ' ') {
                if (k.length() > 0) {
                    a.add(k.toString());
                    k.setLength(0); 
                }
            } else {
                k.append(s.charAt(i));
            }
        }
        if (k.length() > 0) {
            a.add(k.toString());
        }
        return a;
    }
}
