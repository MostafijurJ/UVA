#include<bits/stdc++.h>

using namespace std;

using namespace std;
int main()
{
    int t,a,b,c,d,i;
    while((scanf("%d",&t)==1))
    {
        for(i=0; i<t; i++)
        {
            scanf("%d %d %d %d",&a,&b,&c,&d);
            if(a==b && b==c && c==d && d==a)
            {
                printf("square\n");
            }
            else if((a==c && b==d)||(a==b && c==d)||(b==c && a==d))
            {
                printf("rectangle\n");
            }
            else if(a<=b+c+d && b<=a+c+d && c<=a+b+d && d<=a+b+c)
            {
                printf("quadrangle\n");
            }
            else
            {
                printf("banana\n");
            }
        }
    }

    return 0;
}
