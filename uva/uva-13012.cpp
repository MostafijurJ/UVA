#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin >> n){
        int arr[5];
        int ans=0;
        for(int i=0;i<5;i++) scanf("%d",&arr[i]);
        for(int i=0;i<5;i++) {
            if(arr[i]==n)
                ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
