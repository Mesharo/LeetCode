class Solution {
public:
    int arrangeCoins(int n) {      
        return (int)(sqrt((long)n * 2 + 0.25) - 0.5);
    }
};

/*
    int arrangeCoins(int n) {
            
        int height = 1; 
        
        while (n > 0)  {
            n -= height;
            height++;
        }
        
        if (n == 0)  {return (height - 1);}
        
        return (height - 2);   
    }
*/