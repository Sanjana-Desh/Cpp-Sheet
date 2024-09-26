// fibinocci 
// my approach (dynamic programming)
    int n;
        cin >> n;
        int arr[n];
        arr[0] = 1;
        arr[1] = 1;

        for (auto i=2; i<n; i++)
        {
                arr[i] = arr[i-1] + arr[i-2];
        }

        if (n == 1)
                {
                        cout << 1;
                }
        else if (n == 2)
                {
                        cout<< 1;
                }
        else{
                cout << arr[n-1];
        }

// recursive approach

#include<bits/stdc++.h>
using namespace std;

int recur(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return recur(n - 1) + recur(n - 2);
}

int main()
{
    int n;
    cin>>n;
    
    cout<<recur(n)<<endl;
}

// 3rd approach ptimized dynamic programming

#include<bits/stdc++.h>
using namespace std;

int recur(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return recur(n - 1) + recur(n - 2);
}

int main()
{
    int n;
    cin>>n;
    
    cout<<recur(n)<<endl;
}