class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        num_map = {}
        res = []
        
        for i in range(len(nums)):
            num_map[nums[i]] = i
        
        for i in range(len(nums)):
            complement = target - nums[i]
            if complement in num_map.keys() and num_map[complement] != i:
                res.append(i)
                res.append(num_map[complement])
                return res
