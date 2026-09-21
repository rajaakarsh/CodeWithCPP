#include <bits/stdc++.h>
#include <vector>
using namespace std;

int binary_search(vector<int> arr, int target)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[mid - 1 >= 0] && arr[mid - 1] == target)
        {
            return mid - 1;
        }
        if (mid + 1 < arr.size() && arr[mid + 1] == target)
        {
            return mid + 1;
        }
        if (target > arr[mid])
        {
            s = mid + 2;
        }
        else
        {
            e = mid - 2;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{

    // Your code here
    vector<int> arr{10, 3, 40, 20, 50, 80, 70};
    int target = 70;

    int ans = binary_search(arr, target);
    cout << "Index Of " << target << " " << "is " << ans << endl;

    return 0;
}