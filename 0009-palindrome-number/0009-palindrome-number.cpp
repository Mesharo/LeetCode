class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> number;  // store digits
        
        if (x < 0)  {return false;}
        if (x == 0)  {return true;}
        
        while (x != 0)  {
            number.push_back((x % 10));
            x /= 10;
        }
        
        for (int current = 0; current < number.size(); current++)  {
            if (number[current] != number[number.size() - current - 1])  {
                return false;
            }
        }
        
        return true;
    }
};