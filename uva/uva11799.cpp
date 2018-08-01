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
        int m ;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            m = arr[0];
        }
        for(int i=1;i<n;i++){
                m = max(m, arr[i]);
        }
        printf("Case %d: %d\n",j++,m);
    }
    return 0;
}
