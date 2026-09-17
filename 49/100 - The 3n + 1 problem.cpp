#include <iostream>

using namespace std;

int main()
{

    int low;
    while (cin >> low)
    {
        int high;
        cin >> high;

        cout << low << " " << high << " ";
        if (low > high)
            swap(low, high);

        int max_length = 0;
        for (int i = low; i <= high; i++)
        {
            int n = i;
            int current_length = 0;
            while (true)
            {
                if (n == 1)
                {
                    current_length++;
                    break;
                }

                if (n % 2 == 1)
                {
                    n = 3 * n + 1;
                }
                else
                    n = n / 2;

                current_length++;
            }
            if (current_length > max_length)
                max_length = current_length;
        }

        cout << max_length << endl;
    }
    return 0;
}