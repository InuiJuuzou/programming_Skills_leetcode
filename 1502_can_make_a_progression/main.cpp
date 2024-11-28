#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    bool canMakeArithmeticProgression(std::vector<int>& arr) {
        std::vector<int> tmp_arr(arr.begin(),arr.end());
        std::sort(tmp_arr.begin(), tmp_arr.end());

        int cmp = tmp_arr[1] - tmp_arr[0];
        for(int i = 2; i < tmp_arr.size(); i++)
        {
            if(tmp_arr[i-1] - tmp_arr[i] != cmp)
                return false;
        }

        return true;
        
    }
};

int main()
{
    using namespace std;
    Solution s;
    vector<int> arr = {3,5,1};
    cout<<s.canMakeArithmeticProgression(arr)<<endl;
}