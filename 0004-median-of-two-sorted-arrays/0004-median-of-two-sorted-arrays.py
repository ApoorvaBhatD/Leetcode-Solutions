class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
         merged = nums1+nums2
         merged.sort()
         l=len(merged)
         if l%2==0:
            med=(merged[int(l/2)]+merged[int((l/2)-1)])/2
         else:
            med=merged[int(l/2)]
         return med

