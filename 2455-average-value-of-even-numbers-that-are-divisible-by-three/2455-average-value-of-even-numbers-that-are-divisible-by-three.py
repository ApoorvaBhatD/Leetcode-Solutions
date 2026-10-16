class Solution:
    def averageValue(self, nums: list[int]) -> int:
        sum=0
        count=0
        for n in nums : 
            if n%6==0 :
                sum+=n
                count+=1

        return sum//count if count>0 else 0