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
    ll hotel, day;
   while(cin>> hotel >> day){
    ll  sum =0;
         while(1){
             sum += hotel;
             if(sum >= day)
                break;
                    hotel++;
       /// cout <<"hotel : "<< hotel << " ";
       /// cout <<"sum : "<< sum <<endl;
     }
     cout << hotel<<endl;
   }
   return 0;
}

