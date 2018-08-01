
/*------------***********-----------
        Mostafijur Rahman Kajol
         CSE_15, JUST.
    ------********-------------------
    */

#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
int check (int n);

int main()
{
    string k,kk;
   while(cin >> k >> kk){
    int sum=0, summ=0;
    for(int i=0;i<k.size();i++){
        if(k[i]=='a' || k[i] == 'A')
            sum += 1;
        else if(k[i]=='b' || k[i]=='B')
            sum +=2;
            else if(k[i]=='c' || k[i]=='C')
            sum +=3;
            else if(k[i]=='d' || k[i]=='D')
            sum +=4;
            else if(k[i]=='e' || k[i]=='E')
            sum +=5;
            else if(k[i]=='f' || k[i]=='F')
            sum +=6;
            else if(k[i]=='g' || k[i]=='G')
            sum +=7;
            else if(k[i]=='h' || k[i]=='H')
            sum +=8;
            else if(k[i]=='i' || k[i]=='I')
            sum +=9;
            else if(k[i]=='j' || k[i]=='J')
            sum +=10;
            else if(k[i]=='k' || k[i]=='K')
            sum +=11;
            else if(k[i]=='l' || k[i]=='L')
            sum +=12;
            else if(k[i]=='m' || k[i]=='M')
            sum +=13;
            else if(k[i]=='N' || k[i]=='n')
            sum +=14;
            else if(k[i]=='o' || k[i]=='O')
            sum +=15;
            else if(k[i]=='p' || k[i]=='P')
            sum +=16;
            else if(k[i]=='q' || k[i]=='Q')
            sum +=17;
            else if(k[i]=='r' || k[i]=='R')
            sum +=18;
            else if(k[i]=='s' || k[i]=='S')
            sum +=19;
            else if(k[i]=='t' || k[i]=='T')
            sum +=20;
            else if(k[i]=='u' || k[i]=='U')
            sum +=21;
            else if(k[i]=='v' || k[i]=='V')
            sum +=22;
            else if(k[i]=='w' || k[i]=='W')
            sum +=23;
            else if(k[i]=='x' || k[i]=='X')
            sum +=24;
            else if(k[i]=='y' || k[i]=='Y')
            sum +=25;
            else if(k[i]=='z' || k[i]=='Z')
            sum +=26;
    }
    for(int i=0;i<kk.size();i++){
        if(kk[i]=='a' || kk[i] == 'A')
            summ += 1;
        else if(kk[i]=='b' || kk[i]=='B')
            summ +=2;
            else if(kk[i]=='c' || kk[i]=='C')
            summ +=3;
            else if(kk[i]=='d' || kk[i]=='D')
            summ +=4;
            else if(kk[i]=='e' || kk[i]=='E')
            summ +=5;
            else if(kk[i]=='f' || kk[i]=='F')
            summ +=6;
            else if(kk[i]=='g' || kk[i]=='G')
            summ +=7;
            else if(kk[i]=='h' || kk[i]=='H')
            summ +=8;
            else if(kk[i]=='i' || kk[i]=='I')
            summ +=9;
            else if(kk[i]=='j' || kk[i]=='J')
            summ +=10;
            else if(kk[i]=='k' || kk[i]=='K')
            summ +=11;
            else if(kk[i]=='l' || kk[i]=='L')
            summ +=12;
            else if(kk[i]=='m' || kk[i]=='M')
            summ +=13;
            else if(kk[i]=='N' || kk[i]=='n')
            summ +=14;
            else if(kk[i]=='o' || kk[i]=='O')
            summ +=15;
            else if(kk[i]=='p' || kk[i]=='P')
            summ +=16;
            else if(kk[i]=='q' || kk[i]=='Q')
            summ +=17;
            else if(kk[i]=='r' || kk[i]=='R')
            summ +=18;
            else if(kk[i]=='s' || kk[i]=='S')
            summ +=19;
            else if(kk[i]=='t' || kk[i]=='T')
            summ +=20;
            else if(kk[i]=='u' || kk[i]=='U')
            summ +=21;
            else if(kk[i]=='v' || kk[i]=='V')
            summ +=22;
            else if(kk[i]=='w' || kk[i]=='W')
            summ +=23;
            else if(kk[i]=='x' || kk[i]=='X')
            summ +=24;
            else if(kk[i]=='y' || kk[i]=='Y')
            summ +=25;
            else if(kk[i]=='z' || kk[i]=='Z')
            summ +=26;
    }

    while( sum >9){
            sum = check(sum);
    }
    while(summ>9){
        summ = check(summ);
    }
    float m,n;
    m = (float)sum;
    n = (float)summ;

    float  x;
    x = (m/n) *100;
    if(x<=100)
    printf("%.2f %%\n",x);
    else if(x<100){
        x = (m*100)/n;
        printf("%.2f %%\n",x);
    }

   }

   return 0;
}

int check (int n){
    int p=0;
    while(n>0){
        p+= n%10;
        n/=10;
    }
    return p;
}
