class Solution {
    public int numFriendRequests(int[] a) {
        Map<Integer, Integer> m = new HashMap<>();
        int c = 0;
        for (int age : a) {
            m.put(age, m.getOrDefault(age, 0) + 1);
        }
        for (Map.Entry<Integer, Integer> i : m.entrySet()) {
            for (Map.Entry<Integer, Integer> j : m.entrySet()) {
                if ((i.getKey() * 0.5 + 7) >= j.getKey() || i.getKey() < j.getKey() || (i.getKey() < 100 && 100 < j.getKey())) {
                    continue;
                }
                c += i.getValue() * j.getValue();
                if (i.getKey().equals(j.getKey())) {
                    c -= i.getValue();
                }
            }
        }
        return c;
    }
}