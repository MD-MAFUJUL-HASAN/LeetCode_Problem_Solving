class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> map = new HashMap<>();
        List<Integer> result = new ArrayList<>();
        for (int i = 0; i < nums.length; i++) {
            if (map.containsKey(target - nums[i])) {
                result.add(map.get(target - nums[i]));
                result.add(i);
            } else {
                map.put(nums[i], i);
            }
        }
        return result.stream().mapToInt(i -> i).toArray();
    }
}
