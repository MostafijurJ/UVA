
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,c1,c2,c3,n,i=1,p;
    cin >> n;
    while(n--)
        {
        cin >> a >> b >> c >> d >> c1 >> c2 >>c3;

        if(c1<=c2 && c1<=c3)
         p=(c2+c3)/2;

            else if(c2<=c1 && c2<=c3)
            p=(c1+c3)/2;
                else if(c3<=c1 && c3<=c2)
                p=(c1+c2)/2;

        int m=a+b+c+d+p;

        if(m>=90)
        printf("Case %d: A\n",i);
            else if(m>=80)
            printf("Case %d: B\n",i);
            else if(m>=70)
            printf("Case %d: C\n",i);
            else if(m>=60)
            printf("Case %d: D\n",i);
            else if(m<60)
            printf("Case %d: F\n",i);

        i++;
        }
    return 0;
}
