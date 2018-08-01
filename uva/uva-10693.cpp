#include<bits/stdc++.h>
using  namespace std;

int main()
{
    int a,b;
    while(cin >> a >> b){
            if(a==0 && b==0)
                return 0;
        double v = (double) (sqrt(2*a*b));
          double vol = (v*3600)/(2*a);
        printf("%.8lf %.8lf\n",v,vol);
    }
    return 0;
}
