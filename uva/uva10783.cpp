
#include<stdio.h>
int main()
{
    int T,i,a,b,ck=1,sum,temp;
    scanf("%d", &T);
    while (T--)
    {
        sum =0;
        scanf("%d%d", &a,&b);
        if(a>b)
        {
            temp = a;
            a = b;
            b = temp;
        }

            for(i=a; i<=b; i++)
            {
                if(i%2 !=0)
                {
                    sum += i;
                }
            }

            printf("Case %d: %d\n",ck,sum);
            ck++;
    }
    return 0;
}
