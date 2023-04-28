class Solution:
    def tribonacci(self, n: int) -> int:
        first, second, third = 0, 1, 1
        
        for _ in range(3, n + 1):
            first, second, third = second, third, first + second + third
            
        return first if n == 0 else third