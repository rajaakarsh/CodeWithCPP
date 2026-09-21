#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Sort 0s and 1s
    vector<int> arr{0, 1, 1, 0, 0, 0, 1, 1, 1};

    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        if (arr[start] == 0)
        {
            start++;
        }
        else if (arr[end] == 1)
        {
            end--;
        }
        else
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    // Print
    for (auto value : arr)
    {
        cout << value << " ";
    }

    return 0;
}