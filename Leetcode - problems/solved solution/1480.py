class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        list = []
        for i in range(len(nums)):
            list.append(sum(nums[:i + 1]))
        return list