#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        vector<int> arr;
        bool flag = true;
        int k;
        
        if (m <= 1 || n <= 1) // modify
            flag = false;

        if (flag)
        while (n > 1) //modify
        {
            if (n == 1)
                break;

            if (n % m != 0)
            {
                flag = false;
                break;
            }

            arr.push_back(n);
            n /= m;
        }
        if (!flag)
            cout << "Boring!";
        else
        {
            for (int i = 0; i < arr.size(); i++)
                cout << arr[i] << " ";
            cout << "1";
        }
        cout << endl;
    }

    return 0;
}