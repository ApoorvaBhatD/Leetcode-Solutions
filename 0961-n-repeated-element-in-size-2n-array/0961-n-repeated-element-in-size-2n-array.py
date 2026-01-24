class Solution:
    def repeatedNTimes(self, nums: List[int]) -> int:
        counts = {}
        for x in nums:
            counts[x] = counts.get(x, 0) + 1
            if counts[x]>1:
                return x
