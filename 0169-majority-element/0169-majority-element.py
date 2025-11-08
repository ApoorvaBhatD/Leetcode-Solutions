class Solution: 
    def majorityElement(self, nums: List[int]) -> int: 
        d={} 
        n=len(nums) 
        for num in nums: 
            d[num]=d.get(num,0)+1 
        maj=n/2 
        for key,value in d.items(): 
            if value>maj: 
                maj=value
                a = key 
        return a