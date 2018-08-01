#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,t,p,j=1;
    cin >> t;

    while(t--)
    {
      cin >> a >> b >> c;
      if(a>b && b>c || a<b && b<c)
            p = b;
      if(a>c && c>b || a<c && c<b)
        p = c;
      if(b>a && a>c || b<a && a<c)
        p = a;


      cout <<"Case " << j << ": "<< p <<endl;
      j++;
    }

    return 0;
}
