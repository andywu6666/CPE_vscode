// Something wrong
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

long long int process(long long int n)
{
    int digit = 0;
    long long int sum = 0;

    while (n > 0)
    {
        digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

void solve()
{
    // input
    long long int n;
    int p;
    cin >> p;
    for (int i = 1; i <= p; i++)
    {
        while (cin >> n)
        {
            long long int original_n = n;
            set<long long int> seen;

            while (n != 1 && !seen.count(n))
            {
                seen.insert(n);
                n = process(n);
            }

            // output
            if (n == 1)
                cout << "Case #" << p << ": " << original_n << " is a Happy number.";
            else
                cout << "Case #" << p << ": " << original_n << " is an Unhappy number.";
            cout << endl;
        }
    }
}

int main()
{
    solve();
    return 0;
}