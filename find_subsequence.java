import java.util.*;

class Solution {
    public int[] maxSubsequence(int[] nums, int k) {
        int n = nums.length;

        // Step 1: Pair each element with its index
        int[][] pairs = new int[n][2];
        for (int i = 0; i < n; i++) {
            pairs[i][0] = nums[i]; // value
            pairs[i][1] = i;       // original index
        }

        // Step 2: Sort by value descending
        Arrays.sort(pairs, (a, b) -> b[0] - a[0]);

        // Step 3: Take top k elements
        int[][] topK = Arrays.copyOfRange(pairs, 0, k);

        // Step 4: Sort top k by index to keep original order
        Arrays.sort(topK, Comparator.comparingInt(a -> a[1]));

        // Step 5: Extract the values for result
        int[] result = new int[k];
        for (int i = 0; i < k; i++) {
            result[i] = topK[i][0];
        }

        return result;
    }
}
