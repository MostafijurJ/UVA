
#include<bits/stdc++.h>
using namespace std;

int rev(int n)
{
    int re =0,b;
    while(n>0){
    b = n%10;
    re = re*10 +b;
    n/=10;
    }
    return (re);
}
int main()
{
    int t;
    cin >> t;

    while(t--){
        int n,m;

        cin >> n  >> m;
        int sum = rev(n) +rev(m);
        cout << rev(sum)<<endl;
    }
    return 0;
}
