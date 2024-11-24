class Solution {
    public int[] intersection(int[] n1, int[] n2) {
        Set<Integer> a = new HashSet<>();
        Set<Integer> b = new HashSet<>();
        List<Integer> x = new ArrayList<>();
        for (int num : n1) a.add(num);
        for (int num : n2) b.add(num);
        for (int i : a) {
            if (b.contains(i)) {
                x.add(i);
            }
        }
        int[] result = new int[x.size()];
        for (int i = 0; i < x.size(); i++) {
            result[i] = x.get(i);
        }        
        return result;
    }
}
