#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (start + end) / 2;

    while (start <= end)
    {
        int element = arr[mid];

        if (element == target)
        {
            return mid;
        }
        else if (target < element)
        {
            // Search in left
            end = mid - 1;
        }
        else
        {
            // Search in right
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    // Element not found
    return -1;
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 16};
    int size = 7;
    int target = 8;

    int indexOfTarget = binarySearch(arr, size, target);

    if (indexOfTarget == -1)
    {
        cout << "Target not found" << endl;
    }
    else
    {
        cout << "Target found at index " << indexOfTarget << endl;
    }

    return 0;
}