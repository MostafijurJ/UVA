 /*
 ---------*********--------
   Mostafijur Rahman Kajol
        CSE, JUST
      -------*****---- --*/

#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

using namespace std;

int main()
{
    long long int a,b;

    while(cin >> a >> b){
        if(a>b)
            cout << a-b<<endl;
        else
            cout << b-a<<endl;
    }

    return 0;
}

