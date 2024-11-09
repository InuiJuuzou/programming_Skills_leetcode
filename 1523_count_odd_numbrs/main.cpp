#include<iostream>
#include <cassert>

class Solution {
public:
    int countOdds(int low, int high) {
        int answer = 0;
        //решение в лоб
        /*
        for(int i = low; i <= high; ++i)
        {
            if(i % 2 != 0) ++answer;
        }
        */
        //с помощью арифметической прогресии
        //Арифметическая прогрессия — это последовательность чисел, в которой каждый последующий элемент отличается от предыдущего на одно и то же постоянное значение. 
        //В нашем случае на 2 от нечетного
        int odd_low = low % 2 != 0 ? low : low + 1;
        int odd_high = high % 2 != 0 ? high : high - 1;
        answer = ((odd_high - odd_low)/2) + 1;
        return answer ;
    }
};

void Test()
{
    using namespace std;
    Solution s;
    {
        assert(s.countOdds(3,7) == 3);
    }
    {
        assert(s.countOdds(8,10) == 1);
    }

    cout<<"DONE!"<<endl;
}

int main()
{
    Test();
}