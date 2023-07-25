class Solution:
    def distributeCandies(self, candies: int, num_people: int) -> List[int]:
        result = [0 for _ in range(num_people)]
        step = 1
        
        while (candies - step >= 0):
            result[(step - 1) % num_people] += step
            candies -= step
            step += 1
            
        result[(step - 1) % num_people] += candies
        return result        