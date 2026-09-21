#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Your code here
    int arr[5];
    cout << "Enter 5 Element in Arr :" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << 2 * arr[i];
    }

    return 0;
}