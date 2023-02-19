class Solution {
public:    
    int digitsCalc(int x) {
        int i = 0;
        while(x > 0) {
            x /= 10;
            i++;
        }

        return i;
    }
    
    bool isPalindrome(int x) {
        if(x < 0)
                return false;

            if(x < 10)
                return true;

            int digits = digitsCalc(x);

            int i = 1;

            int divider1 = (int) pow(10.0, (double) (digits - i));
            int divider2 = 1;

            while (i <= digits / 2) {
                if((x / divider1) % 10 != (x % (divider2 * 10)) / divider2)
                    return false;

                divider1 /= 10;
                divider2 *= 10;

                i++;
            }

            return true;
    }
};
