#include <iostream>
#include <string>
using namespace std;

int nextSum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int depth(int n)
{
    if (n == 9)
        return 1;
    
    return 1 + depth(nextSum(n));
}

void solve()
{
    string str;
    int depth_length = 0;
    while (getline(cin, str) && str != "0")
    {
        long long int digit_sum = 0;
        // first digit_sum
        for (char c: str)
            digit_sum += c - '0';
        


        if (digit_sum % 9 != 0)
        {
            cout << str << " is not a multiple of 9.";
        }
        else
        {
            depth_length = depth(digit_sum);
            cout << str << " is a multiple of 9 and has 9-degree " << depth_length << ".";
        }
        cout << endl;

    }
}

int main()
{
    solve();
    return 0;
}