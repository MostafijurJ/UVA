#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int  tc,cs=1;
    cin >>  tc;
    while(tc--){
        string a,b;
    long long  int m,n,x,y,ck=0;
    char c,cc;
    cin >> a >> x >> c >> n ;
    cin >> b >> y >> cc >> m;

        if(a =="January" || a == "February")
           n=n;
           else n+= 1;

        if(b=="January" || (b == "February"&& y<29))
            m--;


   long long  int m4,m100,m400;
    m4 = (m/4)-((n-1)/4);
    m100 = (m/100)-((n-1)/100);
    m400 = (m/400)-((n-1)/400);

    long long  ans=0;
    ans = m4-m100+m400;

    printf("Case %lld: %lld\n",cs++,ans);
    }
    return 0;
}
