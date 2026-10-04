#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long int process(long long int n)
{
    int digit = 0;
    long long int sum = 0;

    while (n > 0)
    {
        digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
        return sum; 

}



void solve()
{
    //input
    long long int n;
    int p = 1;
    while (cin >> n)
    {


        long long int result = 0;
        vector<long long int>exist;
        bool is_happy = false;
        
        again:
        result = process(n);
        for (int i = 0; i < exist.size(); i++)
        {
            if (exist[i] == result)
                break;
            else if (exist[i] == 1){
                is_happy = true;
                break;
            }
            else
            {
                exist.push_back(result);
                n = result;
                goto again;
            }
        }   
        

        //output
        if (is_happy)
            cout << "Case #" << p << ": " << n << " is a Happy number.";
        else
            cout << "Case #" << p << ": " << n << " is an Unhappy number.";
        cout << endl;
        p++;

    }




}

int main()
{
    solve();
    return 0;
}