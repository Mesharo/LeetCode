class Solution:
    def finalString(self, s: str) -> str:
        res = ""
        
        for x in s:
            if x == 'i':
                res = self.reverseString(res)
                continue
            res += x
            
        return res

    def reverseString(self, s: str) -> str:
        return s[::-1]

#