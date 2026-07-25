class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        d={}
        arr = []
        n=len(nums)
        for num in nums :
            d[num]=d.get(num,0)+1
        i=0
        for key,value in d.items():
            if value > n/3 :
                arr.append(key)
        return arr