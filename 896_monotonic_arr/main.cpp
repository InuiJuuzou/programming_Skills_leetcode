#include <iostream>
#include <vector>

class Solution {
public:
    bool isMonotonic(std::vector<int>& nums) {
        bool is_inc = true, is_dec = true;
        for(uint i=1; i<nums.size(); ++i)
        {
            //проверяем для возрастающей последовательности i = 3 i-1 = 2 - не возрастает значит не монотонно возрастающая 
            if(nums[i]<nums[i-1])
            {
                is_inc = false;
            }
            //тоже самое тока с убыванием
            if(nums[i]>nums[i-1])
            {
                is_dec = false;
            }
        }

        if(is_dec || is_inc)
        {
            return true;
        }

        return false;
    }
};

int main()
{
    using namespace std;

    vector<int> nums = {3,1,6};
    Solution s;
    cout<<s.isMonotonic(nums)<<endl;
}