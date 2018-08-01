#include<stdio.h>
int main()
{
    int n,a[100],i,ck;
    while(scanf("%d",&n)!=EOF)
    {
        ck=0;

        for(i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
            if(a[i] >= 0)
              ck=1;
        }

            if(ck!=1)
            {
                printf("Jolly\n");
            }
            else
                printf("Not jolly\n");
    }
    return 0;
}
