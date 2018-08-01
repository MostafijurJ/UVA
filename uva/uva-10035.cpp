
/*

        Mostafijur Rahman Kajol
        JUST, CSE'15
                             */



#include<bits/stdc++.h>

using namespace std;


int main()
{
   long long a,b;
    while(cin >> a >> b){
        if(a==0 && b==0) break ;
        long long  ck, ckk;
        long long  m=0,n=0;
        while(a>0 || b>0){
            ck = a%10;
            a/=10;
            ckk= b%10;
            b/=10;
            long long  mk;
            n=(ck+ckk+n);
            n/= 10;
            m+= n;
        }
        if(m==0) cout <<"No carry operation."<<endl;
        else if(m==1)
       printf("%lld carry operation.\n",m);
        else
         printf("%lld carry operations.\n",m);
    }
    return 0;
}
