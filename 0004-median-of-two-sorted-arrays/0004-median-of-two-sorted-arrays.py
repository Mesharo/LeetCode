class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        temp = nums1 + nums2
        temp.sort()
        
        mid = len(temp) // 2
    
        return temp[mid] if (len(temp) & 1) else ((temp[mid] + temp[mid - 1]) / 2)
        
        