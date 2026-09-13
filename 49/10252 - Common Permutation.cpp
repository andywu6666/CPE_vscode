#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string str1, str2, long_str, short_str;
    while (getline(cin, str1))
    {
        getline(cin, str2);
        int llength = (str1.length() > str2.length()) ? str1.length() : str2.length();
        if (str1.length() == llength)
            long_str = str1, short_str = str2;
        else
            long_str = str2, short_str = str1;

        vector<int> alpha_table(26, 0);
        string ans = "";

        // cmp two strings's similiarity
        for (char c : long_str)
            alpha_table[c - 'a']++;

        for (char ch : short_str)
        {
            if (alpha_table[ch - 'a'] > 0)
            {
                ans += ch;
                alpha_table[ch - 'a']--;
            }
        }

        sort(ans.begin(), ans.end());
        cout << ans;

        cout << endl;
    }
    return 0;
}