class Solution {
public:    
    bool isPalindrome(int x) {
        string s = to_string(x);
        reverse(s.begin(), s.end());

        if (to_string(x) == s)  {
            return true;
        }
        return false;


        /*
        string s = to_string(x);
        int i = 0; int j = s.size() - 1;
        
        while (i < j)  {
            if (s[i] != s[j])  {
                return false;
            } 
            i++; j--;
        }  
        
        return true;
        */
    }
};

// FOLLOW UP
    /*
    bool isPalindrome(int x) {
        vector<int> number;  // store digits
        
        if (x < 0)  {return false;}
        if (x == 0)  {return true;}
        
        while (x != 0)  {
            number.push_back((x % 10));
            x /= 10;
        }
        
        for (int current = 0; current < number.size(); current++)  {
            if (number[current] != number[number.size() - current - 1])  {
                return false;
            }
        }
        
        return true;
    }
    */