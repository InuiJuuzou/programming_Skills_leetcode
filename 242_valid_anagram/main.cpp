#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        if(s.size() != t.size())
            return false;
        std::unordered_map<char,int> map_t;

        for(char c : t)
        {
            ++map_t[c];
        }

        for(char c : s)
        {
            if(map_t.find(c) == map_t.end())
            {
                return false;  
            }
            if(map_t.at(c) == 0)
                return false;
            --map_t[c];
        }
       return true;
    }
    bool isAnagram1(std::string s, std::string t)
    {
         if(s.size() != t.size())
            return false;
        
        std::sort(s.begin(),s.end());
        std::sort(t.begin(), t.end());

        for(int i = 0; i < s.length(); ++i)
        {
            if(s[i] != t[i]) return false;
        }

        return true;
    }

};

int main()
{
    using namespace std;

    Solution s;
    cout<<s.isAnagram("anagram","nagarat")<<endl;
}