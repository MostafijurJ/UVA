#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,a,n,ck=0;;
    scanf("%d",&a);
    for(i=0; i<sqrt(a); i++)
    {
        if(a % i == 0)
        ck=1;
    }
    if(ck==0)
        printf("%d is prime\n");

    else
        printf("is not prime \n");

    return 0;
}
