#include <iostream>
#include <vector>

class Solution {
public:
    int maximumWealth(std::vector<std::vector<int>>& accounts) {
        int count = 0;
        int max = 0;

        for(int i = 0; i < accounts.size(); ++i)
        {
            for(int j = 0; j < accounts[i].size(); ++j)
            {
                count+=accounts[i][j];
            }
            if(count>max)
            {
                max = count;
            }
            count = 0;
        }

        return max;
    }
};

int main()
{
    using namespace std;
    Solution s;

    vector<vector<int>> accounts = {{1,5},{7,3},{3,5}};

    cout<<s.maximumWealth(accounts)<<endl;
}