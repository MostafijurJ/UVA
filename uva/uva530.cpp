/*------------***********-----------
        Mostafijur Rahman Kajol
         CSE_15, JUST.
    ------********-------------------
    */

#include<bits/stdc++.h>
#include<stdio.h>
#include<istream>
#include<math.h>
#include<string.h>
#include<algorithm>

using namespace std;

int  per(int p)
{
    int m;
    for(int i=1; i<= p;i++)
        m *= i;
    return (m);
}
int ncr(int n,int r)
{

    return (per(n)/(per(n-r)));
}
int main()
{
   long long  a,b;
   while(cin >> a >> b){
         cout << ncr(a,b) << endl;
   }
   return 0;
}

