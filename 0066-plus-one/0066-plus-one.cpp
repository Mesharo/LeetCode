class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int current = digits.size() - 1; current >= 0; current--)  {
            digits[current] = (digits[current] + 1) % 10;
            if (digits[current] != 0)  {
                break;
            }
            if (current == 0)  {
                digits.insert(digits.begin(), 1);
                break;
            }
        }
        return digits;
    }
};