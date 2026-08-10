class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        dict={}
        result=[]
        n=len(nums)
        for i in range (1,n+1):
            dict[i]=0
        for i in nums:
            if i in dict:
                dict[i]+=1
            
        for key, val in dict.items():
            if (val==0):
                result.append(key)
        return result