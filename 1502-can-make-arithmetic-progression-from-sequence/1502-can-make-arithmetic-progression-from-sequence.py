class Solution:
    def canMakeArithmeticProgression(self, arr: List[int]) -> bool:
        arr_sorted=sorted(arr)
        l=len(arr)
        count=0
        diff=arr_sorted[1]-arr_sorted[0]
        for i in range (0,l-1):
            if (arr_sorted[i+1]-arr_sorted[i])==diff:
                count+=1
        return count == l - 1