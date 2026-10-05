#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> family;

    for (int i = 0; i < n; i++)
    {   int s;
        cin >> s;
        family.push_back(s);
    }
    sort(family.begin(), family.end());
    //sort before median
    int median = family[ n / 2];
    
    int min_distance = numeric_limits<int>::max();
    int current = 0;
    
    
    
        for (int k = 0; k < n; k++)
        {
            current += abs(median - family[k]);
        }

        if (current < min_distance)
            min_distance = current;
    
        cout << min_distance << endl;

}

int main()
{
    int r;
    cin >> r;
    while (r--)
        solve();
    return 0;
}