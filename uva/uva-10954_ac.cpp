/*

        Mostafijur Rahman Kajol
        JUST, CSE'15

    using sort function....


                             */



#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  int arr[100001];
  while(cin  >> n){
      if(n==0)
      return 0;
  for(int i=0;i<n;i++)cin >> arr[i];
  sort(arr, arr+n);

  int temp=0, sum=0;
  temp = arr[0]+arr[1];
  sum += temp;
  for(int i=2;i<n;i++){
      temp += arr[i];

      sum += temp;
  }
   cout << sum <<endl;
  }
    return 0;
}


