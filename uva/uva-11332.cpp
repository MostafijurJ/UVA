
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

long long  rec(long long n)
{
    long long  p=0,sum=0;
   if(n<10)
        return (n);
     while(n>0){
        p = n%10;
        sum += p;
         n/=10;
     }
    /// cout << sum << endl;

     rec(sum);

    /// cout << n ;

}
int main()
{
    long long  n;
    while(scanf("%lld",&n)==1){
            if(n==0)
            return 0;
        cout <<rec(n)<<endl;
    }


   return 0;
}

