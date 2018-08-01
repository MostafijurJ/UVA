

#include<bits/stdc++.h>
#include<stdio.h>
#include<istream>
#include<math.h>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{
    int T,jj=1;
    cin >> T;
    while(T--){
          int n,p,q;
        cin >> n >> p >> q;
        int arr[100000];
        int sum =0,x=0;
            for(int i=0; i<n;i++)
                cin >> arr[i];
        for(int k=1; k<=n; k++){
       /// if(k<=p){
                 ///for(int i=0;i<k; i++)
                  sum += arr[k-1];
                ///  cout << sum <<endl;
                    if(sum <= q)
                       if(x<p)
                        x++;
           /// }
        }
        printf("Case %d: %d\n",jj++,x);
    }
   return 0;
}
