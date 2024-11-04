#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
    std::string addBinary(std::string a, std::string b) {
        std::vector<char> answer;//для удобной записи ответа тк можно сконструировать строку по двум итераторам
        //uint size_max = a.size() > b.size() ? a.size() : b.size();
       // uint size_min = a.size() < b.size() ? a.size() : b.size();
        
        //auto it_b = b.rbegin();
        int carry = 0;
        //считаем что строка а длиннее
        //for(std::string::reverse_iterator it_a = a.rbegin(); it_a != a.rend(); ++it_a)
        for(uint it_a = a.size()-1, it_b = b.size()-1; it_a >= 0; --it_a)
        {
            //проверяем что не дошли до конца строки б, если дошли приплюсовываем 0 + переполнение
            if(it_b == 0)
            {
                int tmp = std::stoi(a[it_a]);
            }
        }
    }
};
