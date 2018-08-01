
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,j=1;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int m=0,p=0;
        for(int i=0;i<n;i++)
            cin >> arr[i];
            int a=arr[0];
            for(int i=1;i<n;i++){
                   /// cout << arr[i] << " ";
                if(a<arr[i]){
                    m++;
                    a=arr[i];
                }
                else if(a>arr[i]){
                    p++;
                    a = arr[i];
                }

            }
            printf("Case %d: %d %d\n",j++,m,p);
    }
    return 0;
}
