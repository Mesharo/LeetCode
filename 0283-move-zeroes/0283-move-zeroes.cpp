class Solution {
public:
    /*
    standard swap from C++11
    
    template<typename T> void swap(T& t1, T& t2) {
        T temp = std::move(t1); // or T temp(std::move(t1));
        t1 = std::move(t2);
        t2 = std::move(temp);
    }
    */
    
    void moveZeroes(vector<int>& nums) {
        int index = 0;
        for (int current = 0; current < nums.size(); current++)  {
            if (nums[current] != 0)  {
                swap(nums[index], nums[current]);
                index++;
            }
        }
    }
};

