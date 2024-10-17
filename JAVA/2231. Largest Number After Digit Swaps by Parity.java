import java.util.*;

class Solution {
    public int largestInteger(int n) {
        int r;
        List<Integer> odd = new ArrayList<>();
        List<Integer> even = new ArrayList<>();
        List<Boolean> parity = new ArrayList<>();
        
        // Extract digits and classify them
        while (n != 0) {
            r = n % 10;
            n /= 10;
            if (r % 2 == 0) {
                parity.add(true);  // Even digit
                even.add(r);
            } else {
                parity.add(false); // Odd digit
                odd.add(r);
            }
        }
        
        // Sort lists in descending order
        Collections.sort(odd, Collections.reverseOrder());
        Collections.sort(even, Collections.reverseOrder());
        
        // Use StringBuilder to build the result
        StringBuilder result = new StringBuilder();
        
        for (boolean isEven : parity) {
            if (isEven) { // True means even
                result.append(even.remove(even.size() - 1));
            } else { // False means odd
                result.append(odd.remove(odd.size() - 1));
            }
        }
        
        // Reverse the StringBuilder
        result.reverse();
        
        // Convert the reversed result to an integer
        return Integer.parseInt(result.toString());
    }
}