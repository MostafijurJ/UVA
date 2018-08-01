#include<bits/stdc++.h>
using namespace std;

int main()
{
    string k;

    while(cin>>k)
    {
        for(int i=0;i<k.size();i++){
                k[i]= k[i]-7;
        }

        cout << k <<endl;
    }
    return 0;
}
