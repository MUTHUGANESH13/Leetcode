class Solution {
    public int singleNumber(int[] n) {
        Map<Integer, Integer> m = new HashMap<>();
        for (int i : n) {
            m.put(i, m.getOrDefault(i, 0) + 1);
        }
        for (Map.Entry<Integer, Integer> i : m.entrySet()) {
            if (i.getValue() == 1) return i.getKey();
        }
        return 0;
    }
}
