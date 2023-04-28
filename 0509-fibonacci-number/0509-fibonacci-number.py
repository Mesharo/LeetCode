class Solution:
    def fib(self, n: int) -> int:
        first, second = 0, 1
        
        for _ in range(2, n+1):
            first, second = second, first + second
        
        return first if n == 0 else second