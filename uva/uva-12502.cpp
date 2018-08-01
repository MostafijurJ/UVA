#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  t,a,b,c;
    scanf("%d",&t);
    while(t--){
       cin >> a >> b >> c;
       int m = c*(2*a-b)/(a+b);cout << m << endl;
    /* int  k = (a+b)/3;
       int  kk =(int ) c/k;
             int p = (int)a%k;
        if(p==0)
        cout << c << endl;

        else  cout << p*kk<<endl;*/

    }
    return 0;
}
