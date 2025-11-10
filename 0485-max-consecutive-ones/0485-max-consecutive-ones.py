class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        count=0
        counter_list=[]
        for i in nums:
            if (i==1):
                count+=1
            else:
                counter_list.append(count)
                count=0
        counter_list.append(count)
        return max(counter_list)