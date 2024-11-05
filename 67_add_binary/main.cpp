#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
    std::string addBinary(std::string a, std::string b) {
        std::vector<char> answer;//для удобной записи ответа тк можно сконструировать строку по двум итераторам

        auto it_b = b.rbegin();
        int carry = 0;

        //считаем что строка а длиннее
        for (std::string::reverse_iterator it_a = a.rbegin(); it_a != a.rend(); ++it_a)
        {
            //проверяем что не дошли до конца строки б, если дошли приплюсовываем 0 + переполнение
            if (it_b == b.rend())
            {
                int tmp = (*it_a - '0') + carry;
                answer.push_back((tmp  % 2) + '0');
                carry = tmp / 2;
                continue;
            }

            int tmp = (*it_a - '0') + (*it_b - '0') + carry;
            carry = tmp / 2;
            answer.push_back((tmp ) % 2 + '0');
            ++it_b;
        }

        if (it_b != b.rend())
        {
            for (; it_b != b.rend(); ++it_b)
            {
                int tmp = (*it_b - '0') + carry;
                answer.push_back((tmp ) % 2 + '0');
                carry = tmp / 2;
            }
        }

        if (carry == 1)
        {
            answer.push_back('1');
        }
        //Получение строки из вектора в обратном порядке
        std::string tmp_ans(answer.rbegin(), answer.rend());
        return tmp_ans;
    }
};

int main()
{
    using namespace std;
    Solution s;

    cout<<s.addBinary("11","1")<<endl;
}
