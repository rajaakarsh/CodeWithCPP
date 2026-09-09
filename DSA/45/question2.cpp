#include <bits/stdc++.h>
#include <limits.h>
using namespace std;

int getMax(int arr[][3], int row, int col)
{
    int maxi = INT_MIN;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > maxi)
            {
                maxi = arr[i][j];
            }   
        }
    }

    return maxi;
}

int getMin(int arr[][3], int row, int col)
{
    int mini = INT_MAX;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] < mini)
            {
                mini = arr[i][j];
            }
        }
    }

    return mini;
}

int main()
{

    int arr[3][3] = {
        {1, 2, 3},
        {1, 2, 3},
        {1, 2, 8}};

    int row = 3;
    int col = 3;

    cout << "Maximum element: " << getMax(arr, row, col) << endl;
    cout << "Minimun element: " << getMin(arr, row, col);
    return 0;
}