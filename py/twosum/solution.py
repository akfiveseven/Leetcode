class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        myMap = {}
        for i in range(0, len(nums)):
            complement = target - nums[i]
            if complement in myMap:
                return [i, myMap[complement]]
            else:
                myMap[nums[i]] = i
