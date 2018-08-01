#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,T;
    while(scanf("%d%d", &a,&b)==2)
    {
        c = 2*(a*b);
        printf("%d\n",abs(c));
    }
     return 0;
}
