/// parking in sequence



#include<bits/stdc++.h>
using namespace std;

int main()
{
  int tst;
  cin >> tst;
  while(tst--){
      int n;
  int arr[1000];
  cin >> n;
  for(int i=0;i<n;i++)cin >> arr[i];

    sort(arr,arr+n);
    int temp, sum=0;
    if(arr[0]>arr[n-1])
      temp = arr[0]-arr[n-1];
    else temp=arr[n-1]-arr[0];
    sum += temp;
    for(int i=0;i<n-1;i++){
      if(arr[i]>arr[i+1])
        temp = arr[i]- arr[i+1];
      else temp=arr[i+1]-arr[i];
      sum += temp;
    }

    cout << sum <<endl;
  }
  return 0;
}
