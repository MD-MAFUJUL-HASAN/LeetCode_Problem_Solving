class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        m = {}
        result = []
        for i in range(len(nums)):
            if target - nums[i] not in m:
                m[nums[i]] = i
            else:
                result.append(m[target - nums[i]])
                result.append(i)
        return result
