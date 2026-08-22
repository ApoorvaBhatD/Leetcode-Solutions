class Solution:
    def findMissingElements(self, nums: List[int]) -> List[int]:
        dictn={}
        arr=[]
        
        for n in nums :
            dictn[n]=dictn.get(n,0)+1
        high=max(nums)
        low=min(nums)
        i=low
        while (i<=high):
            if i not in dictn :
                arr.append(i)
            i+=1
        return arr
        
