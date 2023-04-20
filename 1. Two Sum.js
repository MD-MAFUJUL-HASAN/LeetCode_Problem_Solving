var twoSum = function(nums, target) {
    const map = new Map();
  const result = [];
  for (let i = 0; i < nums.length; i++) {
    if (map.has(target - nums[i])) {
      result.push(map.get(target - nums[i]));
      result.push(i);
    } else {
      map.set(nums[i], i);
    }
  }
  return result;
};