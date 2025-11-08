class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s)!=len(t):
            return False
        d1={}
        d2={}
        for ch in s:
            d1[ch]=d1.get(ch,0)+1
        for a in t:
            d2[a]=d2.get(a,0)+1
        return d1==d2
    