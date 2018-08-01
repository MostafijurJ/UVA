#include<stdio.h>
int main()
{
    int T,t,i;
    long long int a,b,c,sum=0;

    scanf("%d", &T);
    while(T--)
    {
        sum =0;
        scanf("%d",&t);
        for(i=1; i<=t;i++)
        {
            scanf("%lld%lld%lld", &a,&b,&c);
            sum += (a*c);
        }

        printf("%lld\n", sum);

    }
    return 0;
}
