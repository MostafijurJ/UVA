/*------------***********-----------
        Mostafijur Rahman Kajol
         CSE_15, JUST.
    ------********-------------------
    */

#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
    int n;
    while(cin >> n){
     int arr[n];
     for(int i=0;i<n;i++)
        cin >> arr[i];
     int  p=0;
     for(int i=0;i<n;i++){
        for(int j=0; j<n-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                p++;
            }
        }
     }
     for(int i=0;i<n;i++)
        cout << arr[i] << " ";
     cout <<"\nMinimum exchange operations : "<< p << endl;
    }
   return 0;
}

