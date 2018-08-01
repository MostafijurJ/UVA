#include<bits/stdc++.h>
using namespace std;

int Bigmod(int x, int n, int m)
{
    if(n==0)
        return 1;
        else if(n%2==0){
            int y;
            y  = Bigmod(x , (n/2), m);
            return((y*y)%m);
        }
        else
            return((x%m)*(Bigmod(x,n-1,m))%m);


}
int main()
{
    int t;
    while(cin >> t){
    if(t==0)
        return 0;

    while(t--){
    long long  int a,b,c,m;

    cin >> a >> b >> c;
     m = Bigmod(a,b,c);

     cout << m <<endl;

    }
    }
    return 0;
}

