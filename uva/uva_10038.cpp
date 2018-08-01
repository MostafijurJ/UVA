
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[20000],arr2[20000],i,ck,n;
    while(scanf("%d",&n)==1){
            ck=1;
        for(i=0;i<n;i++)
            cin>>arr1[i];

        for(i=0; i<n-1; i++)
            arr2[i]=abs(arr1[i+1]-arr1[i]);

        sort(arr2,arr2+(n-1));
        for(i=1;i<n;i++){
            if((arr2[i] == arr2[i-1])){
                ck=0;
                break;
            }
        }
    if(ck==0)
        cout<<"Not jolly"<<endl;
    else
        cout<<"Jolly"<<endl;
    }
    return 0;
}
