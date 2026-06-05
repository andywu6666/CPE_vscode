//Accepted
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int dx[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dy[] = {1, 1, 1, 0, 0, -1, -1, -1};

int main()
{
    int m, n, t = 1;
    bool first = true;
    while (cin >> m >> n && (m || n))
    {
        cin.ignore();
        if (!first)
            cout << endl;

            first = false; //fix the problem where first would never become false
    

        string line;
        vector<vector<int>> grid(m + 1, vector<int>(n + 1, 0));
        for (int i = 0; i < m; i++)
        {
            getline(cin, line);
            for (int j = 0; j < line.length(); j++)
            {
                if (line[j] == '*')
                    grid[i][j] = -1;
            }
        }

        // processing
        for (int v = 0; v < m; v++)
        {
            for (int u = 0; u < n; u++)
            {
                if (grid[v][u] == -1)
                    for (int r = 0; r < 8; r++)
                    {
                        if (v + dx[r] >= 0 && u + dy[r] >= 0 && v + dx[r] < m && u + dy[r] < n) // add upper bound
                        {
                            if (grid[v + dx[r]][u + dy[r]] == -1)
                                continue;
                            else
                                grid[v + dx[r]][u + dy[r]]++;
                        }
                    }
            }
        }
        cout << "Field #" << t << ":\n";
        t++;

        // For debugging
        for (int v = 0; v < m; v++)
        {
            for (int u = 0; u < n; u++)
            {
                if (grid[v][u] == -1)
                    cout << '*';
                else
                    cout << grid[v][u];
            }
            cout << endl;
        }
    }

    return 0;
}