#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    vector<vector<vector<int>>> v1(4, vector<vector<int>> (3, vector<int> (2,0)));

    for ( auto i : v1)
    {
        for ( auto j: i)
        {
            for ( auto k: j)
            {
                cout << k;
            }

            cout << endl;
        }

        cout << endl;
    }
    
}