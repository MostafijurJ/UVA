/*------------***********-----------
        Mostafijur Rahman Kajol
         CSE_15, JUST.
    ------********-------------------
    */

#include<bits/stdc++.h>

using namespace std;
typedef long long l;
l bee(l n)
{
    l i, a=0,b=1,c,sum=0;
    for(i=1;i<=n;i++){
        c = a+b;
        a = b;
         b= c;
          sum += c;
    }
    return sum;
}
int main()
{
        l n;
    while(cin >> n){
            if(n== -1)
            return 0;
    if(n==0)
        cout << 0 << " " <<1 <<endl;
        else if(n==1)
            cout << 1 << " " << 2 <<endl;
        else{
            cout << bee(n-1)+1<<" ";
            cout << bee(n)+1 << endl;
        }

       }
   return 0;
}

