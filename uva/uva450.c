#include<stdio.h>
int main()
{
    int a,b,sum, n;
    scanf("%d", &n);
    a = 0, b=1;
    while(n<1)
    {
        sum = a+b;
        a = b;
        b = sum;

    }
    printf("%d\n", sum);
    return 0;
}

