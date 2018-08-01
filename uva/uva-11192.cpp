#include<bits/stdc++.h>
using  namespace std;

int main()
{

    int k;
   while(cin >> k)
   {
       if(k==0)
        return 0;
    string s,ss[100];
       cin  >> s;

       int f=0,g=0,j,div;
        div = k;
        k=s.size()/k;
        int d=k;
        for(int i=0; i<div; i++){
            for(j=g; j<k; j++){
                ss[i]+=s[j];
            }
            g=k;
            k+=d;
        }
        for(int i=0; i<div; i++){
            for(int m=ss[i].size()-1; m>=0; m--){
                cout << ss[i][m];
            }

      } cout << endl;


   }
    return 0;
}
