class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        count={}
       
        for i in s:
            count[i]=count.get(i,0)+1
        for j in t:
            if j in count:
                count[j]-=1
                if count[j]<0:
                 
                     return j
            else:
                return j

        