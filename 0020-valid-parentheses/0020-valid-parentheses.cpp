#include <stack>

class Solution {
public:
    bool isValid(string s) {
        stack<char> myStack;
        
        for (int current = 0; current < s.size(); current++)  {
            if ((s[current] == '(') || (s[current] == '[') || (s[current] == '{'))  {
                myStack.push(s[current]);
                continue;
            }
            if (myStack.empty())  {
                return false;
            }
            if (s[current] == ')')  {
                if (myStack.top() == '(')  {
                    myStack.pop();
                    continue;
                }
                return false;
            }
            if (s[current] == ']')  {
                if (myStack.top() == '[')  {
                    myStack.pop();
                    continue;
                }
                return false;
            }
            if (s[current] == '}')  {
                if (myStack.top() == '{')  {
                    myStack.pop();
                    continue;
                }
                return false;
            }
        }
        
        if (myStack.empty())  {
            return true;
        }
        return false;
    }
};