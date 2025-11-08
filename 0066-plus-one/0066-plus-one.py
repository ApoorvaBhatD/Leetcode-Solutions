class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        s1 = ''.join(map(str, digits))
        l1=[]
        num=int(s1) + 1
        l1 = list(map(int, str(num)))
        return l1

      