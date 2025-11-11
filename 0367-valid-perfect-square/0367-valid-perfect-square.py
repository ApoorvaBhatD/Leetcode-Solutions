class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        if num%10 not in (1,4,9,6,5,0):
            return False
        if num in (1,4):
            return True
        for i in range(1,(num//2)+1):
            if i*i == num:
                return True
            if i*i>num:
                return False
        return False

        