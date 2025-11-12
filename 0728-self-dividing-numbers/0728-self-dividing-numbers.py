class Solution:
    def selfDividingNumbers(self, left: int, right: int) -> list[int]:
        result = []
        for num in range(left, right + 1):
            num_str = str(num)
            divisible = True
            for digit in num_str:
                if digit == '0' or num % int(digit) != 0:
                    divisible = False
                    break
            if divisible:
                result.append(num)
        return result
