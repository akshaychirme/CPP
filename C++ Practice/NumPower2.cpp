#include <iostream>
using namespace std;

class Solution
{
public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n)
    {

        if (n <= 0)
        {
            return false;
        }
        while (n > 1)
        {
            if (n % 2 != 0 && n != 1)
            {
                return false;
            }
            n = n / 2;
        }
        return true;
    }

    //     if (n == 0)
    //         return false;

    //     return (ceil(log2(n)) == floor(log2(n)));
    // }
};

int main()
{
    Solution obj;
    bool num = obj.isPowerofTwo(80);
    cout<<num;

    return 0;
}