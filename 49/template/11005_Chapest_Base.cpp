#include <iostream>
#include <vector>
#include <string>
#include <climits>
using namespace std;

vector<int> price(36);

int price_table(int num)
{

    return price[num];
}

int calculate(int num, int base)
{
    int total_cost = 0;

    if (num == 0)              // add
        return price_table(0); // add

    while (num > 0)
    {
        total_cost += price_table(num % base);
        num /= base;
    }

    return total_cost;
}

void solve()
{
    bool is_first = true;

    int t;
    cin >> t;
    for (int cas = 1; cas <= t; cas++)
    {
        if (!is_first)
            cout << endl;

        is_first = false;

        cout << "Case " << cas << ":\n"; // modify

        cin.ignore();
        for (int i = 0; i < 36; i++)
        {
            int p;
            cin >> p;
            price[i] = p;
        }

        int nums;
        cin >> nums;
        for (int i = 0; i < nums; i++)
        {
            int num;
            cin >> num;

            int min_cost = INT_MAX;
            int total_cost[35] = {0};
            for (int base = 2; base <= 36; base++) // warning
            {
                total_cost[base - 2] = calculate(num, base);
                if (total_cost[base - 2] < min_cost)
                    min_cost = total_cost[base - 2];
            }
            cout << "Cheapest base(s) for number " << num << ":";
            for (int base = 2; base <= 36; base++)
            {

                if (total_cost[base - 2] == min_cost)
                    cout << " " << base;
            }
            cout << endl;
        }
    }
}

int main()
{
    solve();

    return 0;
}