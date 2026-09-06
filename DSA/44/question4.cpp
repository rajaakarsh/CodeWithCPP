#include <bits/stdc++.h>
using namespace std;

int main()
{

    // triplate

    vector<int> arr{10, 20, 30, 40};
    int sum = 80;

    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];

        for (int j = i + 1; j < arr.size(); j++)
        {
            int element2 = arr[j];

            for (int k = j + 1; k < arr.size(); k++)
            {
                int element3 = arr[k];

                if (element + element2 + element3 == sum)
                {
                    cout << element << "," << element2 << "," << element3 << endl;
                }
            }
        }
    }

    return 0;
}