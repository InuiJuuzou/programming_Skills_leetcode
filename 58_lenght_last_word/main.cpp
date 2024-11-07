#include <iostream>
#include <string>
#include <cassert>

class Solution {
public:
    int lengthOfLastWord(std::string s) {
        
        bool flag = false;
        int answer = 0;

        for(int i = s.size() - 1; i >= 0; --i )
        {
            if(flag)
            {
                //если дошли до конца слова выходим
                if(s[i] == ' ') break;
                ++answer;
                continue;
            }
            //нам нужен помледний не пробельный символ
            if(s[i] != ' ')
            {
                flag = true;
                ++answer;
            }
        }

        return answer;
    }
};

void Test()
{
    using namespace std;
    Solution s;

    {
        string str = "Hallo world";
        assert(s.lengthOfLastWord(str) == 5);
    }
    {
        string str = "   fly me  to   the moon     ";
        assert(s.lengthOfLastWord(str) == 4);
    }
    {
        string str = "joyboy";
        assert(s.lengthOfLastWord(str) == 6);
    }

    cout<<"DONE"<<endl;
}

int main()
{
    Test();
}