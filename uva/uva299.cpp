#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i,j,n,a,b[1000],temp;
    scanf("%d", &T);

    while(T--)
    {
         a=0;
        scanf("%d", &n);

        for(int ii=0; ii<n; ii++)
            cin >> b[ii];

            for(i=0; i<n; i++)
            {
                for(j=i; j<n; j++){
                    int temp;
                    if(b[j] < b[i]){
                        temp = b[j];
                        b[j] = b[i];
                        b[i] = temp;
                        a++;
                    }
                }

            }
              ///  for(i=0; i<n; i++)
                   /// cout << b[i] << " ";

            cout << "Optimal train swapping takes " << a << " swaps."<<endl;

    }

    return 0;
}
