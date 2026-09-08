#include <iostream>

using namespace std;

int main()
{
    int numa, numb, a, b;
    while (cin >> numa >> numb && (numa || numb))
    {
        a = numa;
        b = numb;
        int carry = 0, carry_times = 0;

        while ((a || b))
        {
            int digit = a % 10 + b % 10 + carry;
            if (digit >= 10)
            {
                digit -= 10;
                carry = 1;
                carry_times++;
            }
            a /= 10;
            b /= 10;
        }
        if (carry_times)
            cout << "No carry operation.\n";
        else if (carry_times == 1)
            cout << "1 carry operation.\n";
        else
            cout << carry_times << " carry operations.\n";
        
    }
    return 0;
}