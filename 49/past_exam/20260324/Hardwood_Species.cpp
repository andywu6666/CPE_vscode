#include <iostream>
#include <string>
#include <map>
#include <iomanip>

using namespace std;

void solve()
{
    string str;
    int amount = 0;    
    map<string, int> species;

    while (getline(cin, str) && str != "")
    {
        species[str]++;
        amount++;
    }



    //debug
    for (auto s : species)
    {
        double decimal = (double)s.second / (double)amount;
        cout << s.first << " " << fixed << setprecision(4) << decimal;
        cout << endl; 
    }
}

int main()
{
    bool is_first = true;
    int t;
    string blank;
    cin >> t;
    cin >> blank;
    cin.ignore();
    while (t--){
        
        if(!is_first)
        {
            cout << endl;
            is_first = false;
        }
        solve();

    }

    return 0;
}