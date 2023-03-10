#include <unordered_map>
#include <string>

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> myMap = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        char latest = myMap.find(s[(s.size() - 1)])->first;
        int sum = myMap.find(s[(s.size() - 1)])->second;
        
        for (int current = (s.size() - 2); current >= 0; current--)  {
            if (myMap.find(s[current])->second >= myMap.find(latest)->second)  {
                sum += myMap[s[current]];
            }  else  {
                sum -= myMap[s[current]];
            }
            
            latest = s[current];
        }
        
        return sum;
    }
};