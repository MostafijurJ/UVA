
#include<iostream>
using namespace std;

int fcc[5002][1005];

void fib()
{
    long int a,i,j,k;
    fcc[0][1000]=0;fcc[1][1000]=fcc[2][1000]=1;
    for(i=3;i<5000;i++)
    {
        for(j=1000;j>=0;j--)
        {
            fcc[i][j]=fcc[i][j]+fcc[i-1][j]+fcc[i-2][j];

            if(fcc[i][j]>9)
            {
                fcc[i][j-1]+=(fcc[i][j]/10);
                fcc[i][j]=fcc[i][j]%10;
            }

        }
    }
}




int main()
{
    int a,s,i,j,l=0;
    fib();
    while(cin>>a)
    {
        for(i=0;;i++)
        {  if(fcc[a][i]!=0)break; }

        for(j=i;j<=1000;j++)
            {cout<<fcc[a][j];
        }

cout<<endl;
    }

    return 0;
}
