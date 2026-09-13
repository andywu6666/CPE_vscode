#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        vector<int> address;
        int r;
        cin >> r;
        for (int j = 0; j < r; j++)
        {
            int st;
            cin >> st;
            address.push_back(st);
        }
        int min_distance = numeric_limits<int>::max();

        for (int d = 0; d < address.size(); d++)
        {        
            int distance = 0;
            for (int c = 0; c < address.size(); c++)
            {
                if (c == d)
                    continue;

                distance += abs(address[c] - address[d]);
            }

            if (distance < min_distance)
                min_distance = distance;

        }

        cout << min_distance << endl;
    }

    return 0;
}