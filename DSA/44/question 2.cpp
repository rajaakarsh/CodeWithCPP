#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Union
    int arr[] = {1, 2, 3, 4, 5};
    int sizea = 5;

    int brr[] = {6, 7, 8, 9, 10};
    int sizeb = 5;

    vector<int> ans;

    // Push all elements of arr
    for(int i = 0; i < sizea; i++)
    {
        ans.push_back(arr[i]);
    }

    // Push all elements of brr
    for(int i = 0; i < sizeb; i++)
    {
        ans.push_back(brr[i]);
    }

    // Print
    cout << "Printing Ans Array: ";

    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}