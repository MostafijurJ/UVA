
/*

        Mostafijur Rahman Kajol
        JUST, CSE'15
                             */



#include<bits/stdc++.h>

using namespace std;

int main()
{
   long long  n;
   while(cin >> n){
        if(n==0)break;

    long long  ck; ck =sqrt(n);
    if((ck*ck)==n) cout <<"yes"<<endl;
    else cout <<"no"<<endl;

   }
    return 0;
}
