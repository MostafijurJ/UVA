/*------------******7*****-----------
        Mostafijur Rahman Kajol
         CSE_15, JUST.
    ------********-------------------
    */

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int m =(n*567)/9;
        int pp = (((m+7492)*235)/47)-498;
        int p = pp%100;
        cout <<abs(p/10)<<endl;
    }
   return 0;
}

