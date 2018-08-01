/*

        Mostafijur Rahman Kajol
        JUST, CSE'15
        Level -> 2-2



        Not Submitted
                             */



#include<bits/stdc++.h>

using namespace std;

int gcd(int  a, int b){
    while(b){
        b ^= a ^=b ^=a %=b;
    }
    return a;
}
int main()
{
    int tt;
    cin >> tt;
    while(tt--){

        int arr[10000];
        int a, k=0;
        char c;
       while(scanf("%d%c", &a,&c)!=EOF){
                arr[k++]= a;
                if(c =='\n')
                    break ;
       }
        int ans= gcd(arr[0],arr[1]);

       for(int i=0; i<k; i++)
        {
            for(int j=i; j<(k-1);j++){

                int te=j+1;
                if(te ==k)
                    te= j;
               /// cout<< arr[i] << "*";
               /// cout<< arr[te] << " ";
                ans = max(ans, gcd(arr[i], arr[te]));
            }
        }
        cout << ans <<endl;
    }

    return 0;
}

