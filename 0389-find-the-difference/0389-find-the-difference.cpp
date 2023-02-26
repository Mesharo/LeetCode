#include <unordered_map>

class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> myMap;
        
        for (int current = 0; current < s.size(); current++)  {
            if (myMap.find(s[current]) == myMap.end())  {
                myMap[s[current]] = 1;   
                continue;
            }
            myMap[s[current]]++;
        }
        
        for (int current = 0; current < t.size(); current++)  {
            auto search = myMap.find(t[current]);
            if (search == myMap.end())  {
                return t[current];
            } else  {
                search->second--;
                if (search->second < 0)  {
                    return t[current];
                }
            }
        }
        
        return '\0';
    }
};