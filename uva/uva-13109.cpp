#include<bits/stdc++.h>

using namespace std;
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--){

        int a,b,arr[100001],sum=0,ans=0;
        scanf("%d%d",&a,&b);
        for(int i=0;i<a; i++) scanf("%d",&arr[i]);
        sort(arr,arr+a);

        for(int i=0; i<a; i++){
            sum+= arr[i];
            if(sum>=b)
                break;
            ans++;
        }
        printf("%d\n",ans);
    }
}
