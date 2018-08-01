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
    int n;
    while(cin >> n){
            if(n==0)
            return 0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum += (i+1)*(i+1);
        }
        cout << sum <<endl;
    }
   return 0;
}

