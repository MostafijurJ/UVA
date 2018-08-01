
#include<bits/stdc++.h>

using namespace std;

int main()
{

    long long int n,ar[20],ma,prod,cs=1,i,j;
    while(scanf("%lld",&n)==1)
    {
        ma=0;
        for(i=0; i<n; i++)
            scanf("%lld",&ar[i]);
        for(i=0; i<n; i++)
        {
            prod=1;
            for(j=i; j<n && prod; j++)
            {
                prod*=ar[j];
                if(prod>ma)
                    ma=prod;
            }
        }
        printf("Case #%lld: The maximum product is %lld.\n\n",cs++,ma);
    }
    return 0;
}
