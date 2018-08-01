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
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;

         if(a+b<=c || b+c<=a || a+c<=b)
         cout <<"Wrong!!"<<endl;
         else
            cout <<"OK"<<endl;
    }
   return 0;
}


