#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool order(pair<int, int>& a, pair<int, int>& b)
{
    if (a.second == b.second)
        return a.first > b.first;

    return a.second < b.second;
}

int main()
{
    // input values
    string str;
    bool first_case = true;
    while (getline(cin, str))
    {
        vector<int> ascii(256, 0);
        vector<pair<int, int>> ascii_table;

        for (unsigned char c : str)
        {
            ascii[(int)c]++;
        }

        for (int i = 0; i < 128; i++)
        {
            if (ascii[i] > 0)
                ascii_table.push_back({i, ascii[i]});
        }

        sort(ascii_table.begin(), ascii_table.end(), order);

        if (!first_case)
            cout << endl;

        first_case = false;

        for (int j = 0; j < ascii_table.size(); j++)
        {
            cout << ascii_table[j].first << " " << ascii_table[j].second << endl;
        }
    }

    return 0;
}