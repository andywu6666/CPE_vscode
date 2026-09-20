#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<bool> weekday(3651, true);
    // if day 5 + 7n, 6 + 7n, skip
    for (int i = 0; i < 3651; i += 7)
    {
        if (i > 3650)
            break;

        weekday[5 + i] = false;
        weekday[6 + i] = false;
    }
    for (int i = 0; i < t; i++)
    {
        int days, parties;
        cin >> days;
        cin >> parties;

        vector<bool> schedule(days, true);

        int lose_count = 0;
        for (int i = 0; i < parties; i++)
        {
            int cycle;
            cin >> cycle;
            for (int j = cycle - 1; j < days; j += cycle) // modify
            {
                if (j < 0 || j >= (int)schedule.size()) // modify
                    continue;

                schedule[j] = false;
            }
        }

        for (int k = 0; k < days; k++)
        {
            if (weekday[k] && !schedule[k])
                lose_count++;
        }

        cout << lose_count << endl;
    }

    return 0;
}