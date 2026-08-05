class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        res=[0]*2*n
        for i in range (0,n):
            res[2*i]=nums[i]
            res[2*i+1]=nums[i+n]
        return res