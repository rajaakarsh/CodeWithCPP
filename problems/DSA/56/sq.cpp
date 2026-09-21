#include <bits/stdc++.h>
using namespace std;

// Find integer part of square root using Binary Search
int findSq(int n)
{
    int s = 0;
    int e = n;
    int ans = 0;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (mid * mid == n)
        {
            return mid;
        }

        if (mid * mid > n)
        {
            // Search in left half
            e = mid - 1;
        }
        else
        {
            // Possible answer
            ans = mid;
            s = mid + 1;
        }
    }

    return ans;
}

int main()
{
    int n;

    cout << "Enter the number: ";
    cin >> n;

    int ans = findSq(n);

    cout << "Integer part of square root: " << ans << endl;

    int precision;

    cout << "Enter the number of floating digits: ";
    cin >> precision;

    double step = 0.1;
    double finalAns = ans;

    // Find decimal precision
    for (int i = 0; i < precision; i++)
    {
        for (double j = finalAns; j * j <= n; j = j + step)
        {
            finalAns = j;
        }

        step = step / 10;
    }

    cout << "Square root: " << finalAns << endl;

    return 0;
}