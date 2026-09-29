#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    //input
    int d;
    cin >> d;
    int parties;
    cin >> parties;

    //initialize    

    vector<bool>hartals(d+1, false);
    for (int i = 0; i < parties; i++)
    {
        int har_cycle = 0;
        cin >> har_cycle;
        for (int j = har_cycle; j <= d; j += har_cycle)
        {   
            if (j > d)
                continue;

            hartals[j] = true;    
        }
    }


    //process    
    int lostday = 0;
    for (int k = 1; k <= d; k++)
    {
        // Friday(6) and Saturday(7) are weekend, day 1 is Sunday
        int weekday = (k - 1) % 7;
        bool weekend = false;
        if (weekday == 5 || weekday == 6)
            weekend = true;
        
        if (!weekend && hartals[k])
            lostday++;
    }

    //output
    cout << lostday << endl;
    

}


int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        solve();
    }
    return 0;
}