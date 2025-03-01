import java.util.*;

class Solution {
    public int minimumRounds(int[] tasks) {
        Map<Integer, Integer> map = new HashMap<>();
        int count = 0;
        for (int task : tasks)
            map.put(task, map.getOrDefault(task, 0) + 1);
        for (int freq : map.values()) {
            while (freq != 0) {
                if (freq == 1)
                    return -1;
                else if (freq == 4) {
                    count += 2;
                    freq -= 4;
                } else if (freq == 2) {
                    count++;
                    freq -= 2;
                } else {
                    count++;
                    freq -= 3;
                }
            }
        }
        return count;
    }
}
