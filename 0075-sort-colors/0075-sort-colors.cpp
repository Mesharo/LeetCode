class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        // Dutch national flag problem
        int red = 0; int white = 0; int blue = nums.size() - 1;

        while (white <= blue)  {
            if (nums[white] == 0)  {
                swap(nums[red], nums[white]);
                red++; white++;
            } else if (nums[white] == 1)  {
                white++;
            } else  {
                swap(nums[white], nums[blue]);
                blue--;
            }
        }
    }
};


/*
My simple solution:
    int count[3] = {0, 0, 0};
    for (auto i : nums)  {
        count[i]++;
    }
        
    auto index = 0;
    for (auto i = 0; i < 3; i++)  {
        while (count[i] != 0)  {
            nums[index] = i;
            count[i]--; index++;
        }
    }
*/