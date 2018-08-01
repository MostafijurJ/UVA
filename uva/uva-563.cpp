#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

using namespace std;

int main()
{
    double h, m;
    char s;

    while(cin >> h >> s >> m){
            if(h==0 && m==0)
            return 0;
        double x,y;
         x =(60*h)-(11*m);
         ///cout << x <<endl;
         if(x<0)
             x = -(x);

          y = x/2;
         if(y>180)
            y = 360-y;

            printf("%.3lf\n",y);
    }

    return 0;
}

