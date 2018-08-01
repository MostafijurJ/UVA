#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,p;

    while(cin >> n >> p){
        long long  sum=0;
        for(int i=1;i<=n;i++){
            sum += i*(pow(p,i));
       }
    cout << sum <<endl;

    }

    return 0;
}
