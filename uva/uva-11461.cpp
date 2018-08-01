#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        int a,b,m=0;
         cin >> a >> b;

         if(a==0 && b== 0)
            return 0;
         for(int i=a; i<=b;i++){
                int p = sqrt(i);
            if((p*p)==i)
            m++;
         }

         cout << m<<endl;
    }
    return 0;
}
