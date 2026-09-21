#include <bits/stdc++.h>
using namespace std;

int main()
{

    // declare
    // int arr[3][3];

    // init
    int arr[3][3] = {
        {1, 2, 3},
        {1, 2, 3},
        {1, 2, 8}};

    // roww wise
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Coloum WIse
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    cout << arr[1][3] << endl;

    return 0;
}