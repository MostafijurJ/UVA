#include<bits/stdc++.h>
using namespace std;

int GCD(int a,int b)
{
    if(a%b==0)
        return b;
    return(GCD(b, a%b));
}
int main()
{
    while(1){
    int n,p=0;
     cin >> n;
     if(n==0)
        break ;
     for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
           p += GCD(i,j);///cout << p<<endl;
        }
     }
     cout << p <<endl;
    }
    return 0;
}
