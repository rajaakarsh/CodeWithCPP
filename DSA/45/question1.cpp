#include <bits/stdc++.h>
using namespace std;

void printRowWiseSum(int arr[][3], int row, int cols)
{
    // Row sum -> row traversal
    for (int i = 0; i < row; i++)
    {
        int sum = 0;

        for (int j = 0; j < cols; j++)
        {
            sum = sum + arr[i][j];
        }

        cout << sum << endl;
    }
};

// coloum wise
void printcolWiseSum(int arr[][3], int row, int cols)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;

        for (int j = 0; j < cols; j++)
        {
            sum = sum + arr[j][i];
        }

        cout << sum << endl;
    }
}

// find key

bool findKey(int arr[][3], int row, int cols, int key)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == key)
                return true;
        }
    }
    return false;
}

int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {1, 2, 3},
        {1, 2, 8}};

    printRowWiseSum(arr, 3, 3);
    printcolWiseSum(arr, 3, 3);
    int key = 4;
    if (findKey(arr, 3, 3, key))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}