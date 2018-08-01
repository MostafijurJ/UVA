
#include<bits/stdc++.h>
using  namespace std;

int main()
{
    int n;

    while(cin >> n){
        long long div=1,ans=1;

        while(div%n !=0){
            div = (div * 10 + 1) % n;
            ans ++;
        }
        cout  << ans <<endl;

    }
    return 0;
}
