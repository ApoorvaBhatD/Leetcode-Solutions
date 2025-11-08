class Solution:
    def firstUniqChar(self, s: str) -> int:
        d={}
        for ch in s:
            if ch not in d:
                d[ch]=1
            else:
                d[ch]+=1
        for key,value in d.items():
            if value==1:
                return s.index(key)
           
        return -1
            
        

            
            
        