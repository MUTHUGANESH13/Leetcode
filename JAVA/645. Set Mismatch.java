class Solution {
    public int[] findErrorNums(int[] nums) {
        Map<Integer, Integer> map = new HashMap<>();
        int[] result = new int[2];
        for (int num : nums) {
            map.put(num, map.getOrDefault(num, 0) + 1);
            if (map.get(num) == 2) result[0] = num;
        }
        for (int i = 1; i <= nums.length; i++) {
            if (!map.containsKey(i)) {
                result[1] = i;
                break;
            }
        }
        return result;
    }
}
