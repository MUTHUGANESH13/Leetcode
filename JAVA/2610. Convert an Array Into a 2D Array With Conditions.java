class Solution {
    public List<List<Integer>> findMatrix(int[] n) {
        Map<Integer, Integer> countMap = new HashMap<>();
        int maxCount = 0;
        for (int num : n) {
            countMap.put(num, countMap.getOrDefault(num, 0) + 1);
            maxCount = Math.max(maxCount, countMap.get(num));
        }
        List<List<Integer>> result = new ArrayList<>(maxCount);
        for (int i = 0; i < maxCount; i++) {
            result.add(new ArrayList<>());
        }
        Map<Integer, Integer> indexMap = new HashMap<>();
        for (int num : n) {
            int index = indexMap.getOrDefault(num, 0);
            result.get(index).add(num);
            indexMap.put(num, index + 1); 
        }
        return result;
    }
}