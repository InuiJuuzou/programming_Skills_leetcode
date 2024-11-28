#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    bool lemonadeChange(std::vector<int>& bills) {
        /*std::unordered_map<int,int> wallet = {{5,0},{10,0},{20,0}};
        bool ans = true;

        for(int bill : bills)
        {
            ++wallet[bill];
            if(bill == 5) continue;
            if(bill == 10 && wallet[5]>0)
            {
                --wallet[5];
                continue;
            }
            else if(bill == 20 && (wallet[5] > 0 && wallet[10]>0))
            {
                --wallet[5];
                --wallet[10];
                continue;
            }
            else if(bill == 20 && wallet[5] >= 3)
            {
                wallet[5]-=3;
            }
            else
            {
                ans = false;
                break;
            }

        }
        

        return ans;*/

        int n5 = 0;
        int n10 = 0;

        for(int bill : bills)
        {
            if(bill == 5) ++n5;
            else if(bill == 10)
            {
                if(n5 < 1)
                {
                    return false;
                }
                else
                {
                    ++n10;
                    --n5;
                }
            }
            else
            {
                if(n5 >= 1 && n10 >= 1)
                {
                    --n5;
                    --n10;
                }
                else if(n5 >= 3)
                {
                    n5 -= 3;
                }
                else{
                    return false;
                }

            }
        }
        return true;
    }
};

int main()
{
    using namespace std;
    Solution s;
    vector<int> bills = {5,5,5,10,20};
    cout<<s.lemonadeChange(bills)<<endl;
}