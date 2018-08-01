#include<stdio.h>
int rev(int a);

int main()
{
    long long int b,n,a,p,m;
    int x=0,t;
    scanf("%d",&t);
    while(t--)
    {

        x=0;
        scanf("%lld", &n);
        while(1){
            x++;
            a = n;
            b = rev(n);
            m = a+b;
            if(m==rev(m)){
                printf("%d %lld\n",x,m);
                break;
            }

            n = m;
    }

    }
    return 0;
}

int rev(int n)
{
    int p,re=0,r;
    p=n;
    while(p>0)
    {
        r = p%10;
        re = re*10+r;
        p /= 10;
    }
    return re;
}
