#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int>a, pair<int, int>b)
{
    if (a.second == b.second)
        return a.first < b.first;

    return a.second > b.second;
}


void solve()
{
    int t;
    cin >> t;
    cin.ignore();
    vector<pair<int, int>> freq(26);

    //initilize 
    for (int i = 0; i < 26; i++)
        freq[i].first = i;

    while (t--)
    {
        string str;

        getline(cin, str);

        for (char c : str)
        {
            if (isalpha(c))
                freq[toupper(c) - 'A'].second++;
        }

    }
    sort(freq.begin(), freq.end(), cmp);

    for (const auto & p : freq)
    {
        if (p.second > 0)
            cout << (char)(p.first + 'A') << " " << p.second << endl; 
    }
    
}

int main()
{

    solve();

    return 0;
}