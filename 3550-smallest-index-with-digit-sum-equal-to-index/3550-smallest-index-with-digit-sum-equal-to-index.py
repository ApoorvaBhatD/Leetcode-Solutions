class Solution:
    def smallestIndex(self, nums: List[int]) -> int:
        x=min(27, len(nums)-1)
        for i in range (0,x+1):
            val = nums[i]
            digit_sum = 0
            while val > 0:
                digit_sum += val % 10
                val //= 10

            if digit_sum == i:
                return i

        return -1


