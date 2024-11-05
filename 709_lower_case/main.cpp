#include <iostream>
#include <string>

class Solution {
public:
    std::string toLowerCase(std::string s) {
        std::string answer;

        for(char c : s)
        {
            if(c >= 'A' && c <= 'Z')
            {
                answer.push_back((char)(c+32));
                continue;
            }
            answer.push_back(c);
        }

        return answer;
    }
};

int main()
{
    using namespace std;

    string c = "AloCator";
    Solution s;
    cout<<s.toLowerCase(c)<<endl;


}