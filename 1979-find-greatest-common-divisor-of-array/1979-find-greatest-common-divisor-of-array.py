class Solution:
    def findGCD(self, nums: List[int]) -> int:
        a=min(nums)
        b=max(nums)
        n=len(nums)
        while b!=0:
            a,b=b,a%b
        return (abs(a))