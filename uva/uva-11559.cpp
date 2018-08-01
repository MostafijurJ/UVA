#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,b,h,w;

    while(cin >> n >> b >> h >> w){

    int tk, arr[1000],m=0,k=9999999,kk;
    int brr[1000],z=0,pp;

        for(int i=0;i<h;i++){
            cin >> tk;
            for(int ii=0;ii<w;ii++)
                cin >> arr[ii];
            for(int j=0;j<w;j++){
                if(arr[j]>=n){

            if((tk*n)<=b && (tk*n)<k){
                    k = tk*n;
                kk = tk*n;
               brr[z] = kk;
               z++;
            }
          }
        }
            pp = brr[0];
            for(int s=0; s<z;s++){
                if(pp>brr[s])
                    pp = brr[s];
            }
        }
        if(k!=9999999)
            cout << pp <<endl;
        else
            cout << "stay home"<<endl;
    }

   return 0;
}

