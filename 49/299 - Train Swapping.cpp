#include <iostream>
#include <vector>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int L, s = 0;
        cin >> L;
        vector<int> arr;
        for (int j = 0; j < L; j++)
        {

            int cargo;
            cin >> cargo;
            arr.push_back(cargo);
        }

        // check if a < b
        for (int k = 0; k < L - 1; k++)
        {
            for (int l = k + 1; l < L; l++)
            {
                if (arr[k] > arr[l])
                {
                    swap(arr[k], arr[l]);
                    s++;
                }
            }
        }

        cout << "Optimal train swapping takes " << s << " swaps.\n";
    }
    return 0;
}