#include <iostream>
#include <string>
using namespace std;

void solve()
{
    bool flag = true;
    string str;
    while (getline(cin, str))
    {
        for (char c : str)
        {
            if (c == '"')
            {
                if (flag)
                {
                    cout << "``";
                    flag = false;
                }
                else
                {
                    cout << "''";
                    flag = true;
                }
            }
            else
                cout << c;
        }
        cout << endl;
    }
}

int main()
{
    solve();
    return 0;
}