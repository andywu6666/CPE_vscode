#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


void solve()
{
    string str1;
    string str2;
    while (getline(cin, str1) && getline(cin, str2))
    {
        char alphabet[27] ="abcdefghijklmnopqrstuvwxyz";
        int countA[27] = {0};
        int countB[27] = {0};
        int count_min[27] = {0};
        for (char c: str1)
        {
            countA[c - 'a']++;
        }
        for (char d: str2)
        {
            countB[d - 'a']++;
        }

        for (int i = 0; i < 27; i++){
            count_min[i] = min(countA[i], countB[i]);

            for (int j = 0; j < count_min[i]; j++)
            {
                cout << alphabet[i];
            }
        }
        cout << endl;

    }    

}

int main()
{

    solve();
    return 0;
}