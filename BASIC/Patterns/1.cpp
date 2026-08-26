#include <iostream>
using namespace std;
/*
          ******
          ****** 
          ****** 
          ******
          ******
*/
void printPattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}


/*
          *
          **
          ***
          *****
          ******
*/

void printPattern2(int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

/*
          1
          1 2  
          1 2 3
          1 2 3 4
          1 2 3 4 5
*/



void printPattern3(int n){
     for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i << "";
        }
        cout << endl;
    }
}


/*
          1
          1 2
          1 2 3
          1 2 3 4
          1 2 3 4 5
*/

void pattern4(int n) {
        for(int i=1;i<=n;i++){
            for(int j=0;j<i;j++){
                cout << i << "";
            }
            cout << endl;
        }
    }

    /* 
    
    *****
    ****
    ***
    **
    *
    
    */

    void pattern5(int n) {
        for(int i=n;i>=1;i--){
            for(int j=1;j<=i;j++){
                cout << "*";
            }
            cout << endl;
        }
    }


    /*
    12345
    1234
    123
    12
    1
    */

    void pattern6(int n){
        for(int i=1; i<=n;i++){
            for(int j=1;j<=n-i+1;j++){
                cout << j << "";
            }
            cout << endl ;
        }
    }

    /*

    *
   ***
  *****
 *******
*********

*/

void pattern7(int n){
    
}

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    pattern6(n);
}