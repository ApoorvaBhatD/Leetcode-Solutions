class Solution:
    def targetIndices(self, nums: list[int], target: int) -> list[int]:
        result=[]
        nums=sorted(nums)
        length_of_nums = len(nums)
        for i in range (0,length_of_nums):
            if nums[i]==target:
                result.append(i)
        return result