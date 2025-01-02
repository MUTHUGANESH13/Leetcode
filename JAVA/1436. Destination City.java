import java.util.*;

class Solution {
    public String destCity(List<List<String>> p) {
        Map<String, Integer> m = new HashMap<>();
        for (List<String>i : p) {
            m.put(i.get(0), m.getOrDefault(i.get(0), 0) + 1);
            m.putIfAbsent(i.get(1), 0);
        }
        for (Map.Entry<String, Integer> entry : m.entrySet()) {
            if (entry.getValue() == 0)
                return entry.getKey();
        }
        return "";
    }
}
