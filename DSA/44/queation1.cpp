#include <bits/stdc++.h>
using namespace std;

int findUnique(vector<int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{

    // unique element
    int n;
    cout << "Enter the size of element";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter The element : ";

    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    int uniqueElemnt = findUnique(arr);

    cout << "Unique ELement is: " << uniqueElemnt << endl;
    return 0;
}