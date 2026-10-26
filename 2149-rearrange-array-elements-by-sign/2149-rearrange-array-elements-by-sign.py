class Solution:
    def rearrangeArray(self, nums: list[int]) -> list[int]:
        positive=[]
        negative=[]

        for num in nums:
            if num>0:
                positive.append(num)
            else:
                negative.append(num)
        for i in range (0,len(nums)):
            if (i%2==0):
                nums[i]=positive[i//2]
            else:
                nums[i]=negative[(i-1)//2]
        return nums