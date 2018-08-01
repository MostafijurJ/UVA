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

 int main()
 {
   long long l,u,i,x,co,temp;
   while(scanf("%lld %lld",&l,&u)==2)
   {
     if(l>u){
      temp=l;
      l=u;
      u=temp;
      }
       if(l+u==0)
           break;

     long long m=0,value=0;
     for(i=l;i<=u;i++)
     {
       x=i;
       co=0;
       while(1)
       {
         co++;
         if(x%2!=0)
          x=3*x+1;
          else
          x=x/2;
          if(x==1)
          break;
       }
       if(co>m)
       {
           m=co;
        value=i;
       }
     }
     printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",l,u,value,m);
   }
   return 0;
 }
