#include <iostream>
#include <iomanip>
using namespace std;
// ’kuti’ (10000000), ’lakh’ (100000), ’hajar’ (1000), ’shata’ (100)

void Bangla(long long int &num)
{
    if (num >= 10000000)
    {
           long long coef = num / 10000000;   // save the coefficient BEFORE mutating num
        Bangla(coef);                       // expand the coefficient first (higher place value)
        cout << " kuti";
        num %= 10000000;
    }
    if (num >= 100000)
    {
        long long coef = num / 100000;
        Bangla(coef);
        cout << " lakh";
         num %= 100000;
    }
    if (num >= 1000)
    {
        long long coef = num / 1000;
        Bangla(coef);
        cout << " hajar";
        num %= 1000;
    }
    if (num >= 100)
    {
        long long coef = num / 100;
        Bangla(coef);
        cout << " shata";
        num %= 100;
    }
    if (num > 0){
        cout << " " << num; 
    }
}

void solve()
{
    int p = 1;
    long long int num;
    while (cin >> num)
    {
        cout << setw(4) << p << ".";
        p++;

        if (num == 0)
        {
            cout << " 0\n";
            continue;
        }

       
            Bangla(num);
        

        cout << endl;
    }
}

int main()
{
    solve();
    return 0;
}