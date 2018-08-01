/*

        Mostafijur Rahman Kajol
        JUST, CSE'15
                             */

#include<bits/stdc++.h>

using namespace std;

int chek(int n){
    int m,sum=0;
    while(n>0){
        m = n%10;
        sum += m;
        n/=10;
    }

    return sum;
}

int main()
{
    int a,b;
    int tst;
    scanf("%d",&tst);
    while(tst--){
            int p=0;
        scanf("%d%d",&a,&b);
        int kk,ck;
        for(int i=a;i<=b;i++){
           kk = chek(i);
           ck=0;
           if(kk==1)
            ck=1;
           ///cout << kk <<endl;
         for(int j=2; j<kk;j++){
            if(kk%j==0) ck=1;
         }
         if(ck==0) p++;
        }
    ///cout << p <<endl;
    printf("%d\n",p);
    }

    return 0;
}

