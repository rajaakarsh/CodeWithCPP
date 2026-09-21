#include <bits/stdc++.h>
using namespace std;
bool binartSearch(int arr[][4], int row, int cols, int target){
    int s=0;
    int e= row*cols -1;
    int mid = s+(e-s)/2;

    while (s<=e){
        int rowIndex = mid/cols;
        int colsIndex = mid%cols;

        if(arr[rowIndex][colsIndex] == target){
            return true;
        } else if(arr[rowIndex][colsIndex] < target){
            s = mid + 1;
        } else {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return false;
}
int main() {

    // Your code here
    int arr[5][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};

    int row = 5;
    int cols = 4;

int target = 19;
bool ans = binartSearch(arr,row,cols,target);

    return 0;
}