#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        float n,a[10000],sum=0;
        cin >> n;
            for(int i=0;i<n;i++){
                cin >> a[i];
                sum += a[i];
            }
        int  av =(sum/n);
            float p=0;
            for(int i=0;i<n;i++){
                if(av <a[i])
                  p++;
              }
        float total =((p*100)/n);

        printf("%.3f%\n",total);
    }
    return 0;
}
