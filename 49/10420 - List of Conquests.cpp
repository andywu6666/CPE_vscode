#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int a;
    cin >> a;
    // cin.ignore();
    map<string, int> country;
    for (int i = 0; i < a; i++)
    {
        string str;
        cin >> str;
        cin.ignore();
        string name;
        getline(cin, name);

        country[str]++;
    }
    for (const auto p : country)
    {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}