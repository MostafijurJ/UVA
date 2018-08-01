#include<bits/stdc++.h>

using  namespace std;

int arr[500];
int sz;
int multi(int k){
    int carry =0;
    for(int i=0; i<sz; i++){
        int kk = arr[i]*k +carry;
        arr[i] = kk%10;
        carry = kk/10;
    }
    while(carry){
        arr[sz] = carry%10;
        carry = carry/10;
        sz++;
    }
 }
int fact(int n){
    arr[ 0]=1;
    sz =1;
    for(int i=2; i<=n;i++)
        multi(i);

        for(int i=sz-1; i>=0; i--)
        cout <<arr[i];
        cout <<endl;
}

int main()
{
    int n;
   while(cin >> n){
    cout <<n <<"!" <<endl;
      fact(n);
   }

    return 0;
}
