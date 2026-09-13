#include <iostream>
#include <string>
using namespace std;

long long int reverse(long long int n)
{
    long long int rev = 0;
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

bool isPalindrome(long long int n)
{
    return n == reverse(n);
}

int main()
{
    long long int t;
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; i++)
    {
        long long int n;
        int count = 0;         
        cin >> n;
        while (true)
        {
            // reverse digit    // addition
            n += reverse(n);
            count++;

            // iteration
            if (isPalindrome(n))
                break;
        }
        // output
        cout << count << " " << n << endl;
    }
}