/*

        Mostafijur Rahman Kajol
        JUST, CSE'15

        150135
                             */



#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc, ans=0;
    cin >> tc;
    while(tc--){
        float len,wid,dep,we;
        cin >> len >> wid >> dep >> we;

        float sum = len + wid + dep;
        ///cout << sum <<endl;
        if(((sum <= 125.00) || (len==56 && wid ==45 && dep == 25))&& (we <=7.00)){
            cout << 1 <<endl;
            ans ++;
        }
        else cout << 0 <<endl;
    }
    cout << ans <<endl;
    return 0;
}

