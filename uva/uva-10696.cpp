#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long  int n,a,b;
    while(1)
    {
        cin >> a;
        if(a==0)
            return 0;

            if(a>100)
                cout << "f91("<<a<<") = "<<a-10 <<endl;
            else
                cout << "f91("<<a<<") = "<<91<<endl;
    }
    return 0;
}
