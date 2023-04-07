class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        for (int current = num.size() - 1; current >= 0; current--)  {
            num[current] = num[current] + k;
            k = num[current] / 10;
            num[current] %= 10;
            
            if (k == 0)  {
                break;
            }
        }
        
        while (k)  {
            num.insert(num.begin(), k % 10);
            k /= 10;
        }
        
        return num;
    }
};