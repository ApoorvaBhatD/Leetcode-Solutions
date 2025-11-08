class Solution:
    def reverse(self, x: int) -> int:
        if -2**31 <= x <= 2**31 - 1:
            rev = 0
            x1 = abs(x)
            while x1 > 0:
                last = x1 % 10
                rev = (rev * 10) + last
                x1 //= 10

            sign = -1 if x < 0 else 1
            rev *= sign

           
            if rev < -2**31 or rev > 2**31 - 1:
                return 0

            return rev
        else:
            return 0

