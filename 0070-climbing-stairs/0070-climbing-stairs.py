class Solution:
    def climbStairs(self, n: int) -> int:
        if n in (1,2,3):
            return n
        
        first, second = 2, 3
        
        for _ in range(4, n+1):
            first, second = second, first+second
            
        return(second)

#