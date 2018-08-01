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
    int t,cs=1;
    cin>> t;
    while(t--){

    int n,m;
    cin >> n >>m;
    int sum=0;
    int arr[1000], brr[1000];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum += arr[i];
    }
    for(int i=0;i<n;i++){
        cin >> brr[i];
    }
    int k=0;
    if(sum <= m){
        k=1;
    for(int i=0;i<n;i++){
        if(brr[i]< arr[i])
            k=0;
      }
    }
    printf("Case %d: ",cs++);
    if(k==0)
        cout << "No"<<endl;
    else
        cout << "Yes"<<endl;
    }
   return 0;
}

