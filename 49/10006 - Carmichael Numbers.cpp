//Accepted
#include <iostream>
#include <vector>
// Some numbers that are not prime still pass the Fermat test with
// every number smaller than themselves. These numbers are called Carmichael numbers.
// Fermat test: a^n mod n = a
// 2 < n < 65000
using namespace std;

int mod_pow(int base, int exp, int mod)
{
    int result = 1;
    int value = base % mod;

    while (exp > 0)
    {
        if (exp & 1)
            result = int((1LL * result * value) % mod);

        value = int((1LL * value * value) % mod);
        exp >>= 1;
    }

    return result;
}

int main()
{
    int n;
    // develop prime table < 65000
    vector<bool> is_prime(65001, true);
    is_prime[0] = false;
    is_prime[1] = false;

    for (int i = 2; i * i <= 65000; i++)
    {
        if (is_prime[i])
            for (int j = i * i; j <= 65000; j += i)
            {
                is_prime[j] = false;
            }
    }

    while (cin >> n && n)
    {
        bool is_Carmichael = true;
        if (is_prime[n])
        {
            is_Carmichael = false;
        }
        else
        {

            for (int k = 2; k < n; k++)
            {
                // fermat test
                if (mod_pow(k, n, n) != k)
                {
                    is_Carmichael = false;
                    break;
                }
            }
        }

        if (is_Carmichael)
            cout << "The number " << n << " is a Carmichael number.\n";
        else
            cout << n << " is normal.\n";
    }
    return 0;
}