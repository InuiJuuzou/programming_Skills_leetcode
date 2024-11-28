#include <iostream>

class Solution {
public:
    double myPow(double x, int n) {
        return powR(x,n);
    }
private:
//Рекурсивный метод,слишком долгий
    double powR(double x, int n)
    {
        if(n == 0)
        {
            return 1;
        }
        else if(n < 0)
        {
            return powR(1/x,-n);
        }
        else if(n % 2 == 0)
        {
            return powR(x*x, n/2);
        }
        else
        {
            return x*powR(x*x,(n-1)/2);
        }
    }
};

int main()
{
    using namespace std;

    Solution s;

    cout<<s.myPow(3,-3)<<endl;
}