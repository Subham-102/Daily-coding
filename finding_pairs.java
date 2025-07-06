class FindSumPairs {
    Map<Integer, Integer> map1;
    Map<Integer, Integer> map2;
    int[] nums1, nums2;

    public FindSumPairs(int[] nums1, int[] nums2) {
        this.nums1 = nums1;
        this.nums2 = nums2;
        map1 = new HashMap<>();
        map2 = new HashMap<>();
        for (int x : nums1) map1.put(x, map1.getOrDefault(x, 0) + 1);
        for (int x : nums2) map2.put(x, map2.getOrDefault(x, 0) + 1);
    }

    public void add(int index, int val) {
        int old = nums2[index];
        int updated = old + val;
        nums2[index] = updated;

        map2.put(old, map2.get(old) - 1);
        if (map2.get(old) == 0) map2.remove(old);
        map2.put(updated, map2.getOrDefault(updated, 0) + 1);
    }

    public int count(int tot) {
        int ans = 0;
        for (int x : map1.keySet()) {
            int y = tot - x;
            if (map2.containsKey(y)) {
                ans += map1.get(x) * map2.get(y);
            }
        }
        return ans;
    }
}
