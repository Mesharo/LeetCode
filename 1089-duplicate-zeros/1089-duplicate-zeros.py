class Solution:
    def duplicateZeros(self, arr: List[int]) -> None:
        """
        Do not return anything, modify arr in-place instead.
        """
        
        zeroIndexes = []
        
        for index, item in enumerate(arr):
            if item == 0:
                zeroIndexes.append(index)
                
        for x in reversed(zeroIndexes):
            arr.insert(x, 0)
            arr.pop()      