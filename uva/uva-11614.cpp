
/*------------***********-----------
        Mostafijur Rahman Kajol
         CSE_15, JUST.
    ------********-------------------
    */

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long i,n,t,sum;
   scanf("%lld",&t);
   for(i=1;i<=t;i++)
   {
       scanf("%lld",&n);
       sum = (sqrt(1+8*n)-1)/2;
       printf("%lld\n",sum);
   }
    return 0;
}
