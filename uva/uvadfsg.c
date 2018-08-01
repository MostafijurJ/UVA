#include<stdio.h>
int main()
{
    int a,b,c,T,p=1;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d%d", &a,&b,&c);

        if(a<b && b<c)
            printf("Case %d: %d\n",p,b);
        else if(a<b && a>c)
            printf("Case %d: %d\n",p,a);
        else if(a<b && a<c)
            printf("Case %d: %d\n",p,b);
        else if(a>c && b<a)
            printf("Case %d: %d\n",p,c);
            else if(a<b && b>c)
            printf("Case %d: %d\n",p,c);
            else if(a>b && a<c)
            printf("Case %d: %d\n",p,a);

    }

    return 0;
}
