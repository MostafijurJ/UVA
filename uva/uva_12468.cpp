/*

        Mostafijur Rahman Kajol
        JUST, CSE'15

        150135
                             */

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int st, ses;

    while(cin >> st >> ses){
        if(st==-1 && ses == -1)
        return 0;

        int ans, a,b,c;
        if(st<=ses){
            a = abs((st-ses));
            b =100-ses;
            c = abs(0-st);
            int x = b+c;
            ans = min(a,x);
            cout << ans <<endl;
        }
        else
        {
            a = abs((st-ses));
            b =100-st;
            c = abs(0-ses);
            int x = b+c;
            ans = min(a,x);
            cout << ans <<endl;
        }
    }

    return 0;
}

