#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        bool flag = true;
        vector<int> vec;
        vector<bool> exist(n, false);
        exist[0] = true;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            vec.push_back(num);
        }

        for (int j = 0; j < n - 1; j++)
        {
                int diff = abs(vec[j + 1] - vec[j]);
                if (diff >= n || diff < 1 || exist[diff]){
                    flag = false;
                    break;
                }
                    
                exist[diff] = true;

        }

        if (flag)
            cout << "Jolly";
        else
            cout << "Not jolly";

        cout << endl;
    }
    return 0;
}