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
            if(n==0)
            return 0;
        ll arr[n];
       ll sum=0,k=0;
        ll brr[n];
        for(int i=0;i<n;i++)
            cin >> arr[i];
            sort(arr, arr+n-1);

        ///for(int i=0;i<n;i++)
           /// cout << arr[i] << " " ;

        for(int i=0;i<n;i++){
           if(i<1) sum = arr[0]+arr[1];
            if(i>1){
                brr[k++] =sum;
                sum = sum + arr[i];
            }
        }
        for(int i=0;i<k;i++){
            sum += brr[i];
            ///cout << brr[i]  << " ";
        }
        cout << sum << endl;

    }
   return 0;
}

