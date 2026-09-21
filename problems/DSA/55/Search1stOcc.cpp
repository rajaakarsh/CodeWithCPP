#include <bits/stdc++.h>
using namespace std;

int firstOccurrence(vector<int> v, int target)
{
    int s = 0;
    int e = v.size() - 1;

    int ans = -1;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (v[mid] == target)
        {
            ans = mid;

            // Search on the left side
            // because we want the FIRST occurrence
            e = mid - 1;
        }
        else if (target > v[mid])
        {
            // Search right
            s = mid + 1;
        }
        else
        {
            // Search left
            e = mid - 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> v{1, 2, 4, 4, 4, 4, 6, 7};

    int target = 4;

    int indexOfFirstOcc = firstOccurrence(v, target);

    cout << "Ans is: " << indexOfFirstOcc << endl;

    return 0;
}