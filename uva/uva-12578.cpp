#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main()
{
    int t;
    cin >> t;
    while(t--)
    {

       float total,cir,l,w,r;
            cin >> l;
             w = (l*6)/10;
             r = l/5;

             total = l* w;
             ///cout <<w << " "<<r << " "<< total <<endl;

             cir = pi*(r*r);

             printf("%.2f %.2f\n",cir,(total-cir));
    }
    return 0;
}
