#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <climits>
using namespace std;

int main()
{
    int t;
    int index = 1;
    cin >> t;
    while (t--)
    {
        cin.ignore();
        vector<int> cost_table;
        string str;
        for (int i = 0; i < 4; i++)
        {
            getline(cin, str);
            stringstream ss(str);
            int s;
            while (ss >> s)
            {
                cost_table.push_back(s);
            }
        }


        int c;
        cin >> c;

        if (index > 1) // add a blank after one case's last number   
            cout << endl;

        cout << "Case " << index  << ":\n";
        index++;

      

        for (int j = 0; j < c; j++)
        {
            long long int num;
            cin >> num;

            if (num == 0) 
                    {
                        cout << "Cheapest base(s) for number 0:";
                        for (int b = 2; b <= 36; b++) cout << " " << b;
                        cout << "\n";
                        continue;
                    }


            //me chu
                vector<int> ans;  
                        long long min_cost = LLONG_MAX;              
            for (int b = 2; b <= 36; b++)
            {

                long long int sum_cost = 0; 
                long long int temp_num = num;
                while (temp_num > 0)
                { 
                    sum_cost += cost_table[temp_num % b];
                    temp_num /= b;
                }

                if (sum_cost < min_cost){
                    min_cost = sum_cost;
                    ans.clear();
                    ans.push_back(b);
                }
                else if (sum_cost == min_cost)
                {
                    ans.push_back(b);
                }
            }

            cout << "Cheapest base(s) for number " << num << ": ";
            for (int g = 0; g < ans.size(); g++)
            {
                cout << ans[g];
                if (g < ans.size() - 1){
                    cout << " ";
                }
            }
            cout << endl;
            
        }

    }

    return 0;
}