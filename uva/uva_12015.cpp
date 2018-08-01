#include<bits/stdc++.h>

using namespace std;

int main()
{
    int TC,cs=1;
    cin >> TC;
    while(TC--)
    {
        int arr[10000];
        string k[1000];
        int ans=0;

        for(int i=0;i<10;i++){
            cin >> k[i] >> arr[i];
            ans = max(ans, arr[i]);

        }
        ///cout << ans <<endl;
        printf("Case #%d:\n", cs++);
        for(int i=0; i<10; i++){
                if(arr[i]== ans)
                cout << k[i]  <<endl;
         }
    }
    return 0;
}
