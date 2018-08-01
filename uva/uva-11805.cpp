#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,j=1;;
    cin >>  t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;

        int m = (b+c);
        while(m>a)
            m -= a;

        printf("Case %d: %d\n",j++,m);
    }
    return 0;
}
