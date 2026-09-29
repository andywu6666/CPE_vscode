#include <iostream>
#include <iomanip>
using namespace std;

void process(long long int num)
{
    if (num >= 10000000)
    {
        process(num / 10000000);
        cout << " kuti ";
        num %= 10000000;
    }
    else if (num >= 100000)
    {
        cout << num / 100000 << " " << "lakh ";
        num %= 100000;
    }
    else if (num >= 1000)
    {
        cout << num / 1000 << " " << " hajar ";
        num %= 1000;
    }
    else if (num >= 100)
    {
        cout << num / 100 << " " << " shata ";
        num %= 100;
    }

    if (num >= 100)
        process(num);
    else if (num != 0)
        cout << num;
}

int main()
{
    long long int num;
    int index = 1;
    while (cin >> num)
    {
        cout << setw(4) << index << ". ";
        if (num == 0)
            cout << "0";
        else
            process(num);

        cout << endl;
        index++;
    }
    return 0;
}