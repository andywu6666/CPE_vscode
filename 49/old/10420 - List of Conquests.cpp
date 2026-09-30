    //Accepted
    #include <iostream>
    #include <vector>
    #include <string>
    #include <map>
    using namespace std;
    int main()
    {
        int n;
        cin >> n;
        map<string, int> country;
        for (int i = 0; i < n; i++)
        {
            string str, trash;
            cin >> str;
            getline (cin, trash);

            country[str]++;
        }
        for (auto c : country)
        {
            cout << c.first << " " << c.second << endl;
        }
        return 0;
    }
