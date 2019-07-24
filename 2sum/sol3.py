class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        num_map = {}
        res = []
        for i in range(len(nums)):
            complement = target - nums[i]
            if complement in num_map.keys():
                res.append(i)
                res.append(num_map[complement])
                return res
            num_map[nums[i]] = i
        
