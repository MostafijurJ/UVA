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
    int n,cs=1;
    while(cin >> n){
            if(n<0)
            return 0;
        if(n==1){
            printf("Case %d: 0\n",cs++);

        }
        else{
    int i=1;
    int k=0;
    while(1)
    {
        i += i;
        k++;
        if(n<=i){
            break;
        }
     }

    printf("Case %d: ",cs++);
    cout << k <<endl;
    }
    }
   return 0;
}

