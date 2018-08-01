#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int j=1;
    while(1)
    {
        int n;
       double   u,v,s,t,a;
        cin >> n;
        if(n==1){
            cin >>u>> v>>t;
                a = (v-u)/t;
                    s = (u*t) +(a*t*t)/2;
               printf("Case %d: %.3f %.3f\n", j++,s,a);

        }
            else if(n==2){
                cin >> u >> v >> a;
                t = (v-u)/a;
                    s = (u*t) + (a*t*t)/2;
                    printf("Case %d: %.3f %.3f\n", j++,s,t);

            }
            else if(n==3){
                cin >> u >> a >> s;
                double x =((2*u)*(2*u))+(8*a*s);
                t = (-(2*u) + sqrt(x))/(2*a);

                v = u +(a*t);
                 printf("Case %d: %.3f %.3f\n", j++,v,t);
            }
            else if(n==4)
            {
                cin >> v >> a >> s;

                u = sqrt((v*v)-(2*a*s));

                t = (v-u)/a;
                 printf("Case %d: %.3f %.3f\n", j++,u,t);
            }
            else if(n==0)
                return 0 ;

    }
    int n;
}
