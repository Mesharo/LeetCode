class Solution {
public:
    void reverseString(vector<char>& s) {
        for (auto current = 0; current < (s.size() / 2); current++)  {
            swap (s[current], s[s.size() - 1 - current]);
        }
    }
};