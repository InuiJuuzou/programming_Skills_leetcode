#include <iostream>
#include <vector>

class Solution {
public:
    bool isMonotonic(std::vector<int>& nums) {
        
        bool flag = false;
        for(uint i = 1; i < nums.size(); ++i)
        {
            if(nums[i-1] <= nums[i])
            {
                flag = true;
                continue;
            }
            
            flag = false;
            break;
        }

        return flag;
    }
};

int main()
{
    using namespace std;
    Solution s;

    vector<int> nums ={1,3,2};

    cout<<s.isMonotonic(nums)<<endl;
}