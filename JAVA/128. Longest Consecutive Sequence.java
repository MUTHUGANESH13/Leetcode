class Solution {
    public int longestConsecutive(int[] n) {
        if (n.length == 0)
        return 0;
        Set<Integer> s = new HashSet<>();
        for (int num : n) {
            s.add(num);
        }
        List<Integer> a = new ArrayList<>(s);
        Collections.sort(a);
        int c = 1, m = 1;
        for (int i = 0; i < a.size() - 1; i++) {
            if (a.get(i) + 1 == a.get(i + 1)) 
                c++;
            else
                c = 1;
            m = Math.max(c, m);
        }
        return m;
    }
}
