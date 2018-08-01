
/*------------***********-----------
        Mostafijur Rahman Kajol
         CSE_15, JUST.
    ------********-------------------
    */

#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int gcd(ll a,ll b)
{
    if(a%b==0)
        return b;
    return (gcd(b,a%b));
}
int lcm(ll a,ll b)
{
        return (a*b)/gcd(a,b);
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        ll a,b;
            cin >> a >> b;
       ll gc;
        gc =gcd(a,b);
        ll lc;
         lc = lcm(a,b);
        if (gc==a  && lc == b)
        cout << gc << " "<<lc<<endl;
        else
            cout << -1 <<endl;
    }
   return 0;
}
