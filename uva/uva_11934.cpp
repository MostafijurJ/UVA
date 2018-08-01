#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,e;
    while(cin >> a >> b >> c >> d >> e ){
        if(a==0 && b==0 && c==0 && d==0 && e==0)
            return 0;
        int func=0,ans=0;
        for(int i=0; Ni<=e; i++){
            func = ((i*i)*a) + b*i + c;

            if(func % d==0) ans++;
        }
        cout << ans <<endl;
    }
    return 0;
}
