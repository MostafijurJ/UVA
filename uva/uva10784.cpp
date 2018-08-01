#include<bits/stdc++.h>

using  namespace std;

int main()
{
    long long  n,cs=1;
    while(cin >> n)
    {
        int x;

        if(n==0)
            return 0;
        printf("Case %d: ",cs++);
        x = ceil ( (3 + sqrt (9 + ( 8 * n))) /2);

        cout << x <<endl;

    }
    return 0;
}
