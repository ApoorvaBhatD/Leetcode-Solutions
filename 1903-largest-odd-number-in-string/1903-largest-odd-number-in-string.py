class Solution:
    def largestOddNumber(self, num: str) -> str:
        i=0
        l=list(num)
        l1=l.copy()
        while i<len(l1):

            if int(l[-1])%2==0:
                del l[-1]
            else: 
                break
            i+=1
        return  "".join(l)


