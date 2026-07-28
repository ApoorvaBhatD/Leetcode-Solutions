class Solution:
    def beautySum(self, s: str) -> int:
        beauty =0
        n=len(s)
        for i in range (0,n):
            d={}
            for j in range (i,n):
                letter=s[j]
                d[letter]=d.get(letter,0)+1
        
                freq=list(d.values())
                beauty+= max(freq)-min(freq)   
        return beauty