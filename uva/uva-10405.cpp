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
    int t[1000][1000];
    string a,b;
   while( cin >> a >> b){
    int l;
    if(a.size()>b.size())
         l = a.size();
       else l = b.size();
    int m=0;
        for(int i=0; i<l;i++){
            for(int j=0;j<l;j++){
                if(a[i]==b [j]){
                   t[i][j]=t[i-1][j-1]+1;
                   else
                    t[i][j]= max(t[i-1][j],t[i][j-1];)
                    break;
                }
            }
        }

        cout <<m <<endl;
   }

    return 0;
}

