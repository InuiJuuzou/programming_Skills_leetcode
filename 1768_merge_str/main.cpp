#include <iostream>
#include <string>

class Solution {
public:
    std::string mergeAlternately(std::string word1, std::string word2) {
        std::string answer ="";
        size_t j = 0, word2_lenght = word2.length();

        for(size_t i = 0, word1_lenght = word1.length(); i < word1_lenght; ++i,++j)
        {
            if(j == word2_lenght)
            {
                answer += word1.substr(i,std::string::npos);
                break;
            }
            answer += word1[i];
            answer += word2[j];
        }

        if(j < word2_lenght)
        {
            answer += word2.substr(j,std::string::npos);
        }

        return answer;
    }
};

int main()
{
    Solution s;
    std::string w1 ="abc";
    std::string w2 = "pqrxy";

    std::cout<<s.mergeAlternately(w1,w2)<<std::endl;
    std::cout<<s.mergeAlternately(w2,w1)<<std::endl;
}