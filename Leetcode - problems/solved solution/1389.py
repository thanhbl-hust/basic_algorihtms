class Solution:
    def createTargetArray(self, nums: List[int], index: List[int]) -> List[int]:
        list = []
        for i in range(len(nums)):
            list.insert(index[i], nums[i]);
        return list