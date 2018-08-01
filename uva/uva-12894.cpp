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
    int xo,yo,x1,y1,co,c1,r;

    cin >> xo>> yo >> x1>>y1 >> co >> c1 >> r;
    int len = x1-xo;
    int we = y1-yo;

    if(we == ((len*6)/10) && (r ==(len/5)) && 20*(co-xo)==9*len  && 2*(c1-yo)==we)
        cout << "YES"<<endl;
    else
        cout << "NO"<<endl;
    }
   return 0;
}

