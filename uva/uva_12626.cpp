/*

        Mostafijur Rahman Kajol
        JUST, CSE'15

        150135
                             */



#include<bits/stdc++.h>

using namespace std;

int main()
{
    int cn;
    cin >> cn;
    while(cn--){
        string k;
        cin >> k;
       long long  int m=0,a=0,r=0,g=0,j=0,t=0;
        for(int i=0; i<k.size(); i++){
            if(k[i]=='M') m++;
            else if(k[i]=='A') a++;
            else if(k[i]=='R') r++;
            else if(k[i]=='G') g++;
            else if(k[i]=='I') j++;
            else if(k[i]=='T') t++;
        }
       //// cout << m << " "<< a << " "<< r << " "<< g << " "<< j << " "<< t<<endl;
        long long  ck=0;
        while(m>=1 && a>=3 && r>=2 && g>=1 && j>=1 && t>=1){
            m--;
            a-=3;
            r-=2;
            g--;
            j--;
            t--;
            ck++;
        }
        cout << ck <<endl;
    }

    return 0;
}

