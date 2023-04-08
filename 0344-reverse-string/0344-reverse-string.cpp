class Solution {
public:
    void reverseString(vector<char>& s) {
        int length = s.size() / 2;
        for (auto current = 0; current < length; current++)  {
            swap (s[current], s[s.size() - 1 - current]);
        }
    }
};

//