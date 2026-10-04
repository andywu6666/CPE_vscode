//accepted
#include <iostream>
#include <string>
#include <map>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

bool reorder(pair<string, int> a, pair<string, int>b)
{
    return a.first < b.first;
}


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

    vector<pair<string, int>>vec;

    for (auto s : species)
    {
        vec.push_back({s.first, s.second});
    }
    sort(vec.begin(), vec.end(), reorder);

    for (int i = 0; i < vec.size(); i++)
    {
        double decimal = (100.0 * vec[i].second) / amount ;
        cout << vec[i].first  << " " << fixed << setprecision(4) << decimal;
        cout << endl; 
    }
    
}

int main()
{
    bool is_first = true;
    int t;
    cin >> t;
    cin.ignore();
    cin.ignore(); // delete input's blank line
    while (t--){
        
        if(!is_first)
        {
            cout << endl;

        }           
        is_first = false;
        solve();

    }

    return 0;
}