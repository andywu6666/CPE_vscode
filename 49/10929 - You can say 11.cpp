#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string str;
    bool flag = false;
    while (cin >> str)
    {
        long long int odd_sum = 0, even_sum = 0;
        if (str == "0")
            break;
            
        for (int i = 0; i < str.length(); i++)
        {
            if (i % 2 == 0)
                even_sum += str[i] - '0';
            else
                odd_sum += str[i] - '0';
        }

        long long int diff = abs(even_sum - odd_sum);
        if (diff % 11 == 0)
            flag = true;
        else
            flag = false;

        if (flag)
            cout << str << " is a multiple of 11.\n";
        else
            cout << str << " is not a multiple of 11.\n";

    }
    return 0;
}