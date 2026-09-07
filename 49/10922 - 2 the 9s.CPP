#include <iostream>
#include <string>
using namespace std;


void divide (long long int& sum, int& recur)
{
    long long int b_sum = sum;
    if (b_sum % 9 == 0)
    {
        recur++;      
        b_sum /= 9;
        
    
        if (b_sum> 0)
            divide(b_sum, recur);
    }
}


int main()
{
    string str;
    while (cin >> str)
    {
        if (str == "0")
            break;

        long long int sum = 0;
        int recur = 0;
        for (int i = 0; i < str.length(); i++)
            sum += str[i] - '0';
            
            
        divide(sum, recur);
        if (recur == 0)
        {
             cout << str << " is not a multiple of 9.\n";
        }
        else
            cout << str << " is a multiple of 9 and has 9-degree " << recur << ".\n";
        
    }


    return 0;
}