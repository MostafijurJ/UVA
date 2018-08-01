/*------------***********-----------
        Mostafijur Rahman Kajol
         CSE_15, JUST.
    ------********-------------------
    */

#include<bits/stdc++.h>

using namespace std;

int  fact(int  n){
    if(n==0)
        return 1;
    return n*fact(n-1);
}
int main()
{
    int n;

   while(cin >> n ){

    if((n>=0 && n<=7)  || (n<0 && n%2==0))
        cout <<"Underflow!"<<endl;

       else if(n==8) printf("40320\n");
        else if(n==9) printf("362880\n");
        else if(n==10) printf("3628800\n");
        else if(n==11) printf("39916800\n");
        else if(n==12) printf("479001600\n");
       else if(n==13) printf("6227020800\n");
     else
        cout <<"Overflow!"<<endl;
   }

   return 0;
}

