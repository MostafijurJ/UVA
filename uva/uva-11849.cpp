/*------------***********-----------
        Mostafijur Rahman Kajol
         CSE_15, JUST.
    ------********-------------------
    */

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int  n,m;

    while(cin >> n >> m){
        if(n==0 && m==0)
            return 0;;


    int arr[n],brr[m];
       int k = 0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        for(int i=0;i<m;i++)
            cin >> brr[i];
    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){
            if(arr[i]==brr[j]) k++;
        }

    }
    cout << k << endl;
    }

   return 0;
}

