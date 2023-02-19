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

    int divider1 = 1;
    int divider2 = 1;

    for(int j = 0; j < digits - 1; j++) divider1 *= 10;

    while (i <= digits / 2) {
        if(x / divider1 % 10 != (x % (divider2 * 10)) / divider2 )
            return false;

        divider1 /= 10;
        divider2 *= 10;
        
        i++;
    }

    return true;
}
};
