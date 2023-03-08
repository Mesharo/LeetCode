class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        for (int current = 1; current < strs.size(); current++)  {
            string next = "";
            for (int i = 0; i < prefix.length(); i++)  {
                if (prefix[i] == strs[current][i])  {
                    next += prefix[i];
                } else  {
                    break;
                }
            }
            if (next == "")  {
                return next;
            }
            prefix = next;
        }
        return prefix;
    }
};

//