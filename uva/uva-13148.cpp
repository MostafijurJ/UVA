#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long  n;
    while(scanf("%d",&n) && n){
        long long  x,y;
        x = sqrt(n);
        y = cbrt(n);
        if((x*x)==n && (y*y*y)==n)
            printf("Special\n");
        else printf("Ordinary\n");
    }

}
