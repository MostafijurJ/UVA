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
    string k;
    int p=0;
  while(getline(cin,k)){
    for(int i=0; i<k.size();i++){
        if(k[i]== '"'){
            p++;
            if(p%2==1)
                cout << "``";
            else
                cout << "''";
           /// cout << k[i];
        }
        else
            cout << k[i];

    }
  }
    return 0;
}
