/*------------***********-----------
        Mostafijur Rahman Kajol
         CSE_15, JUST.
    ------********-------------------
    */

#include<bits/stdc++.h>

using namespace std;

typedef long long int  ll;

int main()
{
    ll n;
    while(cin >> n){
    ll p= pow(n,4);
    ll q = 2* pow(n,3);
    ll r = n*n;
    ll sum = (p+q+r)/4;
    cout << sum <<endl;
    }
   return 0;
}

