#include <iostream>
#include <string>
#include <map>
#include <cctype>
#include <vector>
#include <algorithm>
using namespace std;

bool order(pair<char, int> a, pair<char, int> b)
{
    if (a.second != b.second)
    return a.second > b.second;

    return a.first < b.first;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    map<char, int> bet_table;
    vector<pair<char, int>> table;
    for (int i = 0; i < n; i++)
    {
        string str;
        getline(cin, str);
        for (char c : str)
        {
            if (isalpha(static_cast<unsigned char>(c)))
             bet_table[toupper(c)]++;

        }

    }   
      for (const auto &p : bet_table)
            table.push_back({p.first, p.second});

        sort(table.begin(), table.end(), order);

        for (int j = 0; j < table.size(); j++)
        {
            cout << table[j].first << " " << table[j].second << endl;
        }



    return 0;
}