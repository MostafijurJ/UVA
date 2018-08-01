#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int T,i,j=0,n,a,b[1000],temp;
    scanf("%d", &T);

    while(T--)
    {
         a=0;
        scanf("%d", &n);

        for(i=1; i<=n; i++)
        {
            scanf("%d",&b[i]);
        }


            for(i=1; i<n; i++)
            {
                for(j=n-1; j>=i;j--)
                {
                    a=0;
                if(b[j] > b[i])
                {
                    temp = b[j];
                    b[j] = b[i];
                    b[i] = temp;
                    a++;
                }
            }
            printf("%d\n", a);
        }

    }

    return 0;
}
