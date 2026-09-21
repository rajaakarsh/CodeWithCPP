#include <bits/stdc++.h>
using namespace std;

int main() {

    // Your code here
    int arr[] = {3,5,6,32,2,15};
    int size = 7;   
    int maxi = INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<maxi){
            maxi = arr[i];
        }
    }
    cout << maxi;
    return 0;
}