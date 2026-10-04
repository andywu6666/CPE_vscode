#include <iostream>
#include <string>
#include <vector>
using namespace std;


void solve()
{
    int m, n;
    cin >> m >> n;
    string col;
    vector<string>matrix(m);
    for (int i = 0; i < m; i++){
        getline(cin , col);
        matrix[i] = col;
    }

    string word;
    int word_amount = 0;
    int x_offset[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    int y_offset[] = {1, 1, 1, 0, 0, -1, -1 ,-1};
    cin >> word_amount;
    cin.ignore();

    for (int i = 0; i < word_amount; i++)
    {
        getline(cin , word);
        int x_axis = 0, y_axis = 0;
        int c = 0;
        bool flag = false;

       
            for (int j = 0; j < m; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    if (word[c] == matrix[m][n])
                    {
                        if (word.length() == c)
                        {
                            flag =true;
                        }

                        c++;

                        for (int l = 0; l < 8; l++)
                        {
                            matrix[m + x_offset][n + y_offset];
                        }
                    }
                }
            }

        


        cout << x_axis << " " << y_axis << endl;
    }

}

int main()
{
    int t;
    string blank;
    cin >> t;
    while (t--)
    {
        cin >> blank;
        cin.ignore();
        solve();
    }
}