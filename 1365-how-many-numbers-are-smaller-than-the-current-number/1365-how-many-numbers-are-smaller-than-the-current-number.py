class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        n =len(nums)
        count=[0]*n
        for i in range (0,n):
            for j in range (0,n):
                if (nums[i]>nums[j] and i!=j):
                    count[i]+=1
        return count
