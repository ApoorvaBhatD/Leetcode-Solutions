class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:
        d={}
        ans=[]
        for i in nums:
            d[i]=d.get(i,0)+1
        for key, value in d.items():
            if value==1:
                ans.append(key)
        return ans