class Solution {
    public int[] arrayRankTransform(int[] a) {
        if (a.length == 0) return new int[0];
        int[] b, c, d;
        c = a.clone();
        Arrays.sort(a);
        List<Integer> bList = new ArrayList<>();
        bList.add(a[0]);
        for (int i = 1; i < a.length; i++) {
            if (a[i] != bList.get(bList.size() - 1)) bList.add(a[i]);
        }
        b = bList.stream().mapToInt(i -> i).toArray();
        Map<Integer, Integer> x = new HashMap<>();
        for (int i = 0; i < b.length; i++) x.put(b[i], i + 1);
        d = new int[c.length];
        for (int i = 0; i < c.length; i++) d[i] = x.get(c[i]);
        return d;
    }
}
