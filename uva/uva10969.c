#include<stdio.h>

int main()
{
    int n,a,b;
    while(scanf("%d",&n)!=EOF){

            if (n==0)
                return ;

        if(n<=100)
        {
            printf("f91(%d) = %d\n", n,n);
        }

            else if(n>=101)
            {
                a = n-10;

                printf("f91(%d) = %d\n", n,a);
            }


    }

    return 0;
}
