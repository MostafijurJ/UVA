/*
 ---------*********--------
   Mostafijur Rahman Kajol
        CSE, JUST
      ----*****---- */

#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

using namespace std;

int main()
{
   string k;
   long long int a=0,b=0;
   while(cin >> k){
        a=0,b=0;
        for(int i=0;i<k.size();i++){
            for(int j=0;j<k.size();j++){
                if(k[i]>k[j]){
                    int temp = k[i];
                    k[i]= k[j];
                    k[j]= temp;
                }
            }
        }
        for(int i=0; i<k.size();i++){
        b = b*10 + k[i]-48;
    }
   /// cout << b <<endl;
    for(int i=0;i<k.size();i++){
            for(int j=0;j<k.size();j++){
                if(k[i]<k[j]){
                    int temp = k[i];
                    k[i]= k[j];
                    k[j]= temp;
                }
            }
        }
         for(int i=0; i<k.size();i++){
                if(k[0]=='0'){
                    char temp = k[0];
                    k[0] = k[1];
                    k[1] = temp;
                }
        a = a*10 + k[i]-48;
     }
     cout << a <<endl;

     long long int m;
     m = b-a;
     long long int p = m/9;
    printf("%lld - %lld = %lld = 9 * %lld\n", b,a,m,p);
   }
    return 0;

}
