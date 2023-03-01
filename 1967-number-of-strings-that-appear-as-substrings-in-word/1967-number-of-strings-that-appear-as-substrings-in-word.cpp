class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count = 0;
        for (int current = 0; current < patterns.size(); current++)  {
            if (word.find(patterns[current]) != string::npos)  {
                count++;
            }
        }
        return count;
    }
};