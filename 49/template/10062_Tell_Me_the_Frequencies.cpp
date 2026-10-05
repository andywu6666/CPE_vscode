#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool order(pair<int, int> &a, pair<int, int> &b)
{
    if (a.second == b.second)
        return a.first > b.first;
    
        return a.second < b.second;

}

void solve()
{
        string str;
    while (getline(cin, str))
    {
        int freq[129] = {0};
        vector<pair<int, int>> ASCII_table;
        for (int i = 0; i < str.length(); i++)
            freq[str[i]]++;

        for (int i = 0; i < 129; i++)
        {
            if (freq[i] > 0)
                ASCII_table.push_back({i, freq[i]});
        }
        sort(ASCII_table.begin(), ASCII_table.end(), order);

        for (const auto & p: ASCII_table)
        cout << p.first << " " << p.second << endl;
    }
     
}

int main()
{
        solve();
    return 0;
}