// may be error but can AC
#include <iostream>

using namespace std;


int main()
{
    int n;
    while (cin >> n)
    {
        int digit_length = 1;
        long long int remainder = 1;

         while (remainder != 0)
        {
            remainder = (remainder * 10 + 1 ) % n;
            digit_length++;
        }

        cout << digit_length << endl;
    }

    return 0;
}