/*------------***********-----------
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
        int n,m,k=0;
        int p,q;
        cin >> n >> m;
        for(int j=0; j<m;j++){
            cin >> p >> q;
            if(p==n)
                k++;
            if(q==n)
                k++;
        }
     cout << k <<endl;
    }

   return 0;
}
