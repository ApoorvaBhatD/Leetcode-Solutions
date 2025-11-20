class Solution:
    def canMakeArithmeticProgression(self, arr: List[int]) -> bool:
        arr_sorted = sorted(arr)
        diff = arr_sorted[1] - arr_sorted[0]

        for i in range(len(arr_sorted) - 1):
            if arr_sorted[i+1] - arr_sorted[i] != diff:
                return False
        return True