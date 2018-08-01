#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,sum =0;
    cin >> T;

    for(int i=1;i<=T;i++){
        string k;
        int n;
         cin >> k;
            if(k=="donate"){
            cin >> n;
                sum += n;
            }
        else
            cout << sum <<endl;
    }
    return 0;
}
