#include <bits/stdc++.h>
using namespace std;

void transpose(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = i + 1; j < col; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

// Print matrix
void print(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {1, 2, 3},
        {1, 2, 8}
    };

    cout << "Original Matrix:" << endl;
    print(arr, 3, 3);

    transpose(arr, 3, 3);

    cout << "\nTranspose Matrix:" << endl;
    print(arr, 3, 3);

    return 0;
}