//Accepted
#include <iostream>
using namespace  std;

int main()
{
    int n;
    while (cin >> n && n)
    {
        process:
        int sum_digit = 0;
        while (n > 0)
        {
            sum_digit += n % 10;
            n /= 10;
        }
            if (sum_digit >= 10)
            {
                n = sum_digit;
                goto process;
            }

        cout << sum_digit << endl;
    }

    return 0;
}