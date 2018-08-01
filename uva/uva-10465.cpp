/*

        Mostafijur Rahman Kajol
        JUST, CSE'15
                             */



#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m,n,t;
    while(cin >> m >> n >> t){
            int sum=0,sm=0;
        if(m<n){
            if(t%m==0) cout <<t/m<<endl;
            else{
                while(t%m){
                   t = t-n; sum++;
                    }///cout << sum <<endl;
                    cout <<t/m+sum <<endl;
            }
        }
        else{
            if(t%n==0) cout <<t/n <<endl;
            else{
                while(t%n){
                    t -= m; sm++;
                } cout << t/n+sm <<endl;
            }
        }

    }

    return 0;
}

