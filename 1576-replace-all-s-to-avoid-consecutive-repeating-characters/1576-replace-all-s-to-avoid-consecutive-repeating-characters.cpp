class Solution {
public:
       
    string modifyString(string s) {
        
        for (auto current = 0; current < s.length(); current++)  {
            int ascii = 97; // a
            
            if (s[current] == '?')  {
                while (true)  {
                    if (((current != 0) && (ascii == s[current - 1])) || ((current != s.length() - 1) && (ascii == s[current + 1])))  {
                        ascii++;
                        continue;
                    }
                    s[current] = ascii; ascii = 97;
                    break;
                }
            }
        }
            
        return s;
    }
};